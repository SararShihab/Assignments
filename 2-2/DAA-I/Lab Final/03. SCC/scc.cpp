#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>

using namespace std;

class SCC {
private:
    unordered_map<char, vector<char>> adj, revAdj;
    unordered_map<char, bool> visited;
    stack<char> st;

    void dfs1(char u) {
        visited[u] = true;

        for (char v : adj[u]) {
            if (!visited[v]) {
                dfs1(v);
            }
        }

        st.push(u);
    }

    void dfs2(char u) {
        visited[u] = true;
        cout << u << " ";

        for (char v : revAdj[u]) {
            if (!visited[v]) {
                dfs2(v);
            }
        }
    }

public:
    void addEdge(char u, char v) {
        adj[u].push_back(v);
        revAdj[v].push_back(u);
    }

    void findSCC() {
        for (auto &p : adj) {
            visited[p.first] = false;
        }

        for (auto &p : adj) {
            if (!visited[p.first]) {
                dfs1(p.first);
            }
        }

        for (auto &p : adj) {
            visited[p.first] = false;
        }
        cout << "\n---------------------------------" << endl;
        cout << "Strongly Connected Components" << endl;
        cout << "---------------------------------" << endl;

        int sccCount = 1;

        while (!st.empty()) {
            char u = st.top();
            st.pop();

            if (!visited[u]) {
                cout << "SCC " << sccCount++ << ": ";
                dfs2(u);
                cout << endl;
            }
        }
        cout << "---------------------------------" << endl;
    }
};

int main() {
    int E;
    cout << "Enter number of edges: ";
    cin >> E;

    SCC graph;

    cout << "Enter edges (u v):" << endl;
    for (int i = 0; i < E; i++) {
        char u, v;
        cin >> u >> v;
        graph.addEdge(u, v);
    }

    graph.findSCC();

    return 0;
}

/*
10
0 1
1 2
2 0
2 3
3 4
4 5
5 6
6 4
6 7
4 7
*/