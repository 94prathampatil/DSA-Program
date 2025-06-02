#include <bits/stdc++.h>
#define um unordered_map
#define inf INT_MAX
using namespace std;

class Graph
{
public:
    um<int, list<pair<int, int>>> adj;

    void addEdges(int u, int v, int w)
    {
        adj[u].push_back(make_pair(v, w));
    }

    void dijkstraAlgo(int src)
    {
        vector<int> dist(5, inf);
        dist[src] = 0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push(make_pair(0, src));

        while (!pq.empty())
        {
            int front = pq.top().second;
            pq.pop();

            for (auto &i : adj[front])
            {
                if (dist[front] + i.second < dist[i.first])
                {
                    dist[i.first] = dist[front] + i.second;
                    pq.push(make_pair(dist[i.first], i.first));
                }
            }
        }

        for (auto &i : dist)
        {
            cout << (i == inf ? -1 : i) << " ";
        }
        cout << endl;
    }

    void printAdj()
    {
        for (auto &i : adj)
        {
            cout << i.first << " --> [ ";
            for (auto &j : i.second)
            {
                cout << "[" << j.first << ", " << j.second << "], ";
            }
            cout << " ]" << endl;
        }
    }
};

int main()
{
    Graph g;
    g.addEdges(2, 0, 7);
    g.addEdges(2, 1, 1);
    g.addEdges(0, 2, 7);
    g.addEdges(0, 1, 4);
    g.addEdges(0, 3, 5);
    g.addEdges(0, 4, 3);
    g.addEdges(1, 2, 1);
    g.addEdges(1, 0, 4);
    g.addEdges(1, 3, 2);
    g.addEdges(3, 0, 5);
    g.addEdges(3, 1, 2);
    g.addEdges(3, 4, 1);
    g.addEdges(4, 3, 1);
    g.addEdges(4, 0, 3);

    g.dijkstraAlgo(0);
    // g.printAdj();

    return 0;
}
