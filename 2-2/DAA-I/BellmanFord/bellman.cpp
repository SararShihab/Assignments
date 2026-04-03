#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Bellman{
    private:
        vector<int> src, dst, wt;

        void printDistance(int V, vector<int> &dist, int srcNode){
            cout<<"\n== Shortest Distance from Source "<<srcNode<<" ==\n"<<endl;;
            cout<<"\tNode\tDistance"<<endl;

            for (int i = 1; i <= V; i++)
            {
                cout<<"\t"<<i<<"\t";
                if (dist[i]==INT_MAX)
                {
                    cout<<"INF";
                }
                else{
                    cout<<dist[i];
                }
                cout<<endl;
                
            }
            
        }

    public:
        void addEdge(int u, int v, int w){
            src.push_back(u);
            dst.push_back(v);
            wt.push_back(w);
        }

        void shortest(int V, int srcNode){
            int E = src.size();

            vector<int> dist(V+1, INT_MAX);
            dist[srcNode]=0;

            for(int i=1; i<V; i++){
                for(int j=0; j<E; j++){
                    int u = src[j];
                    int v = dst[j];
                    
                    if(dist[u]!=INT_MAX && dist[u]+wt[j]<dist[v]){
                        dist[v]=dist[u]+wt[j];
                    }
                }
            }

            bool hasCycle = false;
            for(int j=0; j<E; j++){
                int u = src[j];
                int v = dst[j];
                    
                if(dist[u]!=INT_MAX && dist[u]+wt[j]<dist[v]){
                    hasCycle=true;
                    break;
                }
            }

            if(hasCycle){
                cout<<"Error:  Negative Cycle Detected!!";
            }
            else{
                printDistance(V, dist, srcNode);
            }
        }

};


int main(){
    int V,E;
    cout<<"Enter number of vertices: ";
    cin>>V;
    cout<<"Enter number of edges: ";
    cin>>E;

    Bellman graph;

    cout<<"Enter weighted edges(u, v, w)"<<endl;
    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;
        graph.addEdge(u, v, w);
    }
    
    int srcNode;
    cout<<"Enter source node: ";
    cin>>srcNode;

    graph.shortest(V, srcNode);

    return 0;
    
}