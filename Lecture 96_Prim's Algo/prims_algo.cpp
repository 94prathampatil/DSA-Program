#include <bits/stdc++.h>
#define ll long long
#define pb push_back
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
        for (int i = 0; i < graph.size(); i++)
        {
            int u = graph[i][0];
            int v = graph[i][1];
            int w = graph[i][2];

            adj[u].pb(make_pair(v, w));
            adj[v].pb(make_pair(u, w));
        }

        vector<int> weight(n, 1e9);
        weight[0] = 0;
        vector<bool> mst(n, false);
        vector<int> parent(n, -1);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, 0});
        // node - weight

        for (int i = 0; i < n; i++)
        {
            int miniWeight = 1e9, u;

            auto itr = pq.top();
            pq.pop();
            u = itr.first;
            miniWeight = itr.second;

            mst[u] = true;

            for (auto it : adj[u])
            {
                int node = it.first;
                int w = it.second;

                if (!mst[node] && w < weight[node])
                {
                    weight[node] = w;
                    parent[node] = u;
                    pq.push({node, weight[node]});
                }
            }
        }

        cout << "Edge \tWeight\n";
        for (int i = 1; i < n; i++)
        {
            cout << parent[i] << " - " << i << "\t" << weight[i] << "\n";
        }
    }
};

int main()
{
    prims p;
    vector<vector<int>> graph;
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
