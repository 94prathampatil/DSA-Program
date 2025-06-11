#include <bits/stdc++.h>
#define pb(x) push_back(x)
#define ll long long
#define llv long long v
using namespace std;

class Kosaraju
{
public:
    void dfs(int node, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited, stack<int> &topo)
    {
        visited[node] = true;

        for (auto nbr : adj[node])
        {
            if (!visited[nbr])
            {
                dfs(nbr, adj, visited, topo);
            }
        }

        topo.push(node);
    }

    void revDfs(int node, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited){
        visited[node] = true;

        for(auto nbr:adj[node]){
            if(!visited[nbr]){
                revDfs(nbr, adj, visited);
            }
        }
    }
    void algorithm(vector<pair<int, int>> &edges, int n)
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        unordered_map<int, list<int>> adj;
        for (int i = 0; i < n; i++)
        {
            int u = edges[i].first;
            int v = edges[i].second;

            adj[u].pb(v);
        }

        unordered_map<int, bool> visited;
        stack<int> topo;

        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                dfs(i, adj, visited, topo);
            }
        }

        // Transpose / Reverse graph
        unordered_map<int, list<int>> transpose;
        for (int i = 0; i < n; i++)
        {
            visited[i] = false;
            for (auto &nbr : adj[i])
                transpose[nbr].pb(i);
        }

        int cnt = 0;
        while (!topo.empty())
        {
            int node = topo.top();
            topo.pop();

            if(!visited[node]){
                cnt++;
                revDfs(node, transpose, visited);
            }
        }

        cout << "Strongly Connected Components are:- " << cnt <<"\n";
        return;
    }
};

int main()
{
    // Graph
    vector<pair<int, int>> edges;
    edges.pb(make_pair(0, 1));
    edges.pb(make_pair(2, 0));
    edges.pb(make_pair(1, 2));
    edges.pb(make_pair(1, 3));
    edges.pb(make_pair(3, 4));

    Kosaraju sl;
    sl.algorithm(edges, edges.size());
    return 0;
}