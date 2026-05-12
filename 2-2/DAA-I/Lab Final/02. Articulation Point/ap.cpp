#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class ArticulationPoint {
private:
    unordered_map<char, vector<char>> adj;
    unordered_map<char, int> disc, low;
    unordered_map<char, bool> visited, isAP;
    int timer;

    void dfs(char u, char parent) {
        visited[u] = true;
        disc[u] = low[u] = ++timer;
        int children = 0;

        for (char v : adj[u]) {
            if (v == parent) continue;

            if (!visited[v]) {
                children++;
                dfs(v, u);

                low[u] = min(low[u], low[v]);

                if (parent != '\0' && low[v] >= disc[u]) {
                    isAP[u] = true;
                }
            } else {
                low[u] = min(low[u], disc[v]);
            }
        }

        if (parent == '\0' && children > 1) {
            isAP[u] = true;
        }
    }

public:
    void addEdge(char u, char v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void findArticulationPoints() {
        timer = 0;

        for (auto &p : adj) {
            visited[p.first] = false;
            isAP[p.first] = false;
        }

        for (auto &p : adj) {
            if (!visited[p.first]) {
                dfs(p.first, '\0');
            }
        }

        cout << "\n---------------------------------" << endl;
        cout << "Articulation Points: ";
        bool found = false;

        for (auto &p : adj) {
            if (isAP[p.first]) {
                cout << p.first << " ";
                found = true;
            }
        }

        if (!found) cout << "None";
        cout << "\n---------------------------------" << endl;
    }
};

int main() {
    int E;
    cout << "Enter number of edges: ";
    cin >> E;

    ArticulationPoint graph;

    cout << "Enter edges (u v):" << endl;
    for (int i = 0; i < E; i++) {
        char u, v;
        cin >> u >> v;
        graph.addEdge(u, v);
    }

    graph.findArticulationPoints();

    return 0;
}

/*
7
1 4
1 2
4 3
2 3
3 5
3 6
5 6
*/