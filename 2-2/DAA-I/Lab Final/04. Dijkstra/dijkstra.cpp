#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <climits>

using namespace std;

class Dijkstra {
private:
    unordered_map<char, vector<pair<char, int>>> adj;

public:
    void addEdge(char u, char v, int w) {
        adj[u].push_back({v, w});
        adj[v];
    }

    void shortestPath(char start) {
        unordered_map<char, int> dist;

        for (auto &p : adj) {
            dist[p.first] = INT_MAX;
        }

        priority_queue<pair<int, char>, vector<pair<int, char>>, greater<>> pq;

        dist[start] = 0;
        pq.push({0, start});

        while (!pq.empty()) {
            auto [d, u] = pq.top();
            pq.pop();

            for (auto [v, w] : adj[u]) {
                if (dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }

        cout << "\n------------------------------------" << endl;
        cout << "Vertex \t Distance from " << start << endl;
        cout << "------------------------------------" << endl;

        int totalCost = 0;

        for (auto &p : dist) {
            cout << p.first << " \t ";
            if (p.second == INT_MAX) {
                cout << "INF";
            } else {
                cout << p.second;
                totalCost += p.second;
            }
            cout << endl;
        }

        cout << "------------------------------------" << endl;
        cout << "Total Cost: " << totalCost << endl;
        cout << "------------------------------------" << endl;
    }
};

int main() {
    int E;
    cout << "Enter number of edges: ";
    cin >> E;

    Dijkstra graph;

    cout << "Enter edges (u v w):" << endl;
    for (int i = 0; i < E; i++) {
        char u, v;
        int w;
        cin >> u >> v >> w;
        graph.addEdge(u, v, w);
    }

    char start;
    cout << "Enter starting node: ";
    cin >> start;

    graph.shortestPath(start);

    return 0;
}