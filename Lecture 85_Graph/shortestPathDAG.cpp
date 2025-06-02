#include <bits/stdc++.h>
#define ll long long
#define llv long long v
#define inf INT_MAX
using namespace std;

class Graph
{

public:
    unordered_map<int, list<pair<int, int>>> adj;
    void addEdges(int u, int v, int w)
    {
        pair<int, int> p = make_pair(v, w);
        adj[u].push_back(p);
    }

    void bfs(int node, unordered_map<int, bool> &visited, stack<int> &topo)
    {
        visited[node] = true;
        stack<int> st;

        for (auto &i : adj[node])
        {
            if (!visited[i.first])
            {
                bfs(i.first, visited, topo);
            }
        }

        topo.push(node);
    }

    stack<int>  topoSort()
    {
        unordered_map<int, bool> visited;
        stack<int> st;

        for (int i = 0; i <= 5; i++)
        {
            if (!visited[i])
            {
                bfs(i, visited, st);
            }
        }

        return st;
    }

    vector<int> getShortPath(int src, int n)
    {
        vector<int> dist(n, inf);
        dist[src] = 0;
        stack<int> st = topoSort();

        while(!st.empty()){
            int top = st.top();
            st.pop();

            if(dist[top] != inf){
                for(auto &i:adj[top]){
                    if(dist[top] + i.second < dist[i.first]){
                        dist[i.first] = dist[top] + i.second;
                    }
                }
            }
        }

        return dist;
    }

    void printAdj()
    {
        for (auto &i : adj)
        {
            cout << i.first << " --> ";
            for (auto &j : i.second)
            {
                cout << "[" << j.first << ", " << j.second << "]";
            }
            cout << "\n";
        }
    }
};

int main()
{
    Graph sl;
    sl.addEdges(0, 1, 5);
    sl.addEdges(0, 2, 3);
    sl.addEdges(1, 3, 6);
    sl.addEdges(1, 2, 2);
    sl.addEdges(2, 3, 7);
    sl.addEdges(2, 4, 4);
    sl.addEdges(2, 5, 2);
    sl.addEdges(3, 4, -1);
    sl.addEdges(4, 5, -2);

    // sl.printAdj();


    vector<int> ans = sl.getShortPath(1, 6);

    for(auto &i:ans){
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}