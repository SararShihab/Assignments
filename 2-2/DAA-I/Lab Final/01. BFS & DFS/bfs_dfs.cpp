#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <stack>

using namespace std;

class GraphTraversal {
private:
    unordered_map<char, vector<char>> adj;

public:
    void addEdge(char u, char v) {
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    void bfs(char startNode) {
        unordered_map<char, bool> visited;
        queue<char> q;

        visited[startNode] = true;
        q.push(startNode);
        
        cout << "\n---------------------------------" << endl;
        cout << "BFS Traversal: ";
        while (!q.empty()) {
            char u = q.front();
            q.pop();
            cout << u << " ";

            for (char v : adj[u]) {
                if (!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
    }

    void dfs(char startNode) {
        unordered_map<char, bool> visited;
        stack<char> s;

        s.push(startNode);

        cout << "\n---------------------------------" << endl;
        cout << "DFS Traversal: ";
        while (!s.empty()) {
            char u = s.top();
            s.pop();

            if (!visited[u]) {
                cout << u << " ";
                visited[u] = true;
            }

            for (auto it = adj[u].rbegin(); it != adj[u].rend(); ++it) {
                if (!visited[*it]) s.push(*it);
            }
        }
        cout << "\n---------------------------------" << endl;
    }
};

int main() {
    int E;
    cout << "Enter number of edges: ";
    cin >> E;

    GraphTraversal gt;
    cout << "Enter edges (u v):" << endl;
    for (int i = 0; i < E; i++) {
        char u, v;
        cin >> u >> v;
        gt.addEdge(u, v);
    }

    char start;
    cout << "Enter starting node: ";
    cin >> start;

    gt.bfs(start);
    gt.dfs(start);

    return 0;
}

/*
10
a b
a s
s c
s g
c d
c f
f g
c e
g h
e h
a
*/