#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int> *l;

    public:
        Graph(int V){
            this->V = V;
            l = new list<int> [V];
        }
    
    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void bfs(){
        queue<int> Q;
        vector<bool> vsted(V, false);

        Q.push(0);
        vsted[0]=true;

        while(Q.size()>0){
            int u = Q.front();
            Q.pop();
            cout << u << " ";

            for(int v: l[u]){
                if(!vsted[v]){
                vsted[v]=true;
                Q.push(v);
                }
            }
        }
    }

};

int main(){
    Graph g(5);
    g.addEdge(0,1);
    
    return 0;
}