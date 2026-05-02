#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>

using namespace std;

class FloydWarshall {
private:
    vector<vector<int>> dist;
    vector<char> nodes;
    unordered_map<char, int> indexMap;

public:
    void addNodes(vector<char> v) {
        nodes = v;
        int n = nodes.size();

        for (int i = 0; i < n; i++) {
            indexMap[nodes[i]] = i;
        }

        dist.assign(n, vector<int>(n, INT_MAX));

        for (int i = 0; i < n; i++) {
            dist[i][i] = 0;
        }
    }

    void addEdge(char u, char v, int w) {
        if (u == v) return;
        int i = indexMap[u];
        int j = indexMap[v];

        dist[i][j] = min(dist[i][j], w);
    }

    void solve() {
        int n = nodes.size();

        for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX) {
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                    }
                }
            }
        }

        cout << "\n------------------------------------" << endl;
        cout << "All-Pairs Shortest Path Matrix" << endl;
        cout << "------------------------------------" << endl;

        cout << "      ";
        for (char node : nodes) {
            cout << node << "    ";
        }
        cout << endl;

        cout << "------------------------------------" << endl;

        for (int i = 0; i < nodes.size(); i++) {
            cout << nodes[i] << "     ";
            for (int j = 0; j < nodes.size(); j++) {
                if (dist[i][j] == INT_MAX)
                    cout << "INF  ";
                else
                    cout << dist[i][j] << "    ";
            }
            cout << endl;
        }
        cout << "------------------------------------" << endl;
    }
};

int main() {
    int n, E;

    cout << "Enter number of vertices: ";
    cin >> n;

    vector<char> nodes(n);
    cout << "Enter vertices: ";
    for (int i = 0; i < n; i++) {
        cin >> nodes[i];
    }

    FloydWarshall graph;
    graph.addNodes(nodes);

    cout << "Enter number of edges: ";
    cin >> E;

    cout << "Enter edges (u v w):" << endl;
    for (int i = 0; i < E; i++) {
        char u, v;
        int w;
        cin >> u >> v >> w;
        graph.addEdge(u, v, w);
    }

    graph.solve();

    return 0;
}

/*
Enter number of vertices: 4
Enter vertices:
1 2 3 4
Enter number of edges: 6
Enter edges (u v w):
1 2 3
2 1 8
1 4 7
4 1 2
2 3 2
3 4 1
*/