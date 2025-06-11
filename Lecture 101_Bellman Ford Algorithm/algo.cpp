// Bellman Ford is an Algorithm to find the shortest path, on Directed graph having a negative weights, and also helps to find the negative edge cycle of the graph.

#include<bits/stdc++.h>
#define ll long long
#define llv long long v
using namespace std;

class BellmanFord{

    public:
        void algorithm(int n, int m, vector<pair<int, pair<int, int>>> &edges, int src, int dest){
            ios_base::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);

            vector<int> dist(n + 1, 1e9);
            dist[src] = 0;

            for (int i = 1; i <= n;i++){
                for (int j = 0; j < m;j++){
                    int u = edges[j].first;
                    int v = edges[j].second.first;
                    int wt = edges[j].second.second;

                    if(dist[u] != 1e9 && ((dist[u] + wt) < dist[v])){
                        dist[v] = dist[u] + wt;
                    }
                }
            }

            int flag = 0;
            for (int j = 0; j < m;j++){
                int u = edges[j].first;
                int v = edges[j].second.first;
                int wt = edges[j].second.second;

                if(dist[u] != 1e9 && ((dist[u] + wt) < dist[v])){
                    flag = 1;
                    dist[v] = dist[u] + wt;
                }
            }

            if(!flag){
                cout << "Shortest Dist from the Src is: " << dist[dest] << "\n";
            }
            else{
                cout << "Negative Edge cycle is Present Can't be able to find the Shortest Path\n";
            }
            return;
        }
};

int main()
{
    vector<pair<int, pair<int, int>>> edges;

    edges.push_back({1, {2, 2}});
    edges.push_back({2, {3, -1}});
    edges.push_back({1, {3, 2}});

    BellmanFord sl;
    sl.algorithm(3, 3, edges, 1, 3);
    return 0;
}
