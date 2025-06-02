#include <bits/stdc++.h>
#define ll long long
#define llv long long v
#define pb(x) push_back(x)
using namespace std;

class graph
{

public:
    map<int, vector<int>> adj;

    void insertInGraph(int u, int v, bool isDirected)
    {
        adj[u].pb(v);

        if (isDirected == false)
        {
            adj[v].pb(u);
        }
    }

    void printAdjList()
    {
        for (auto &i : adj)
        {
            cout << i.first << " --> ";
            for (auto &j : i.second)
            {
                cout << j << ", ";
            }
            cout << "\n";
        }
    }
};

int main()
{
    graph g;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        g.insertInGraph(u, v, 0);
    }

    g.printAdjList();

    return 0;
}