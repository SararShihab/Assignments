#include<iostream>
#include<unordered_map>
#include<vector>
#include<tuple>
#include<queue>

using namespace std;

class Graph{
    unordered_map<char, vector<pair<char, int>> > l;
    
    public:
    void addEdge(char u, char v, int wt){
        l[u].push_back({v, wt});
        l[v].push_back({u, wt});
    }
};

int main(){
    int V, E;
    cin>>V>>E;

    Graph g;

    for(int i=0; i<E; i++){
        int wt;
        char u, v;
        cin>>u>>v>>wt;
        g.addEdge(u, v, wt);
    }

    char src;
    cin>>src;

    g.prims(src);

    return 0;
}