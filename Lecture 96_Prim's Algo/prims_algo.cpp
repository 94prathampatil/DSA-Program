#include <bits/stdc++.h>
#define ll long long
#define llv long long v
#define pb(x) push_back(x)
using namespace std;

class prims
{

public:
    void solve(vector<vector<int>> graph, int n)
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        unordered_map<int, list<pair<int, int>>> adj;
        for (int i = 0; i < n; i++)
        {
            int u = graph[i][0];
            int v = graph[i][1];
            int w = graph[i][2];

            adj[u].pb(make_pair(v, w));
            adj[v].pb(make_pair(u, w));
        }

        // Extra Ds
        vector<int> key;
    }
};

int main()
{
    prims p;
    vector<vectro<int>> graph;
    graph.pb({0, 1, 2});
    graph.pb({1, 0, 2});
    graph.pb({0, 3, 6});
    graph.pb({3, 0, 6});
    graph.pb({3, 1, 8});
    graph.pb({1, 3, 8});
    graph.pb({1, 4, 5});
    graph.pb({4, 1, 5});
    graph.pb({4, 2, 7});
    graph.pb({2, 4, 7});
    graph.pb({1, 2, 3});
    graph.pb({2, 1, 3});
    p.solve(graph, 5);
    return 0;
}