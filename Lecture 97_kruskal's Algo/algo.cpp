#include<bits/stdc++.h>
#define ll long long
#define llv long long v
#define pb(x) push_back()
using namespace std;

class kruskal{
    public:
        
        // implementation of Disjoint sets
        // 1. find
        // 2. union
        // 3. union by rank
        // 4. path compression
        // 5. connected components
        // 6. cycle detection
        // 7. kruskal's algorithm


        void init(vector<int> &parent, vector<int> &rank, int n)
        {
            for (int i = 0; i < n; i++)
            {
                parent[i] = i;
                rank[i] = 0;
            }
        }

        int findParent(vector<int> &parent, int node)
        {
            if (parent[node] == node)
            {
                return node;
            }

            return parent[node] = findParent(parent, parent[node]); // Doing path compression by parent[node] = findParent(parent, parent[node]);
        }

        void unionSet(int u, int v, vector<int> &parent, vector<int> &rank)
        {
            u = findParent(parent, u);
            v = findParent(parent, v);

            if (rank[u] < rank[v])
            {
                parent[u] = v;
            }
            else if (rank[v] < rank[u])
            {
                parent[v] = u;
            }
            else
            {
                parent[v] = u;
                rank[u]++;
            }
        }


        void solve(vector<vector<int>> &edges, int n){
            ios_base::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            
            vector<int> parent(n);
            vector<int> rank(n);
            
            init(parent, rank, n);

            // sort the edges based on weight
            sort(edges.begin(), edges.end(), [](vector<int> &a, vector<int> &b) {
                return a[2] < b[2];
            });

            vector<vector<int>> mst;
            int totalCost = 0;

            for (auto edge : edges)
            {
                int u = findParent(parent, edge[0]);
                int v = findParent(parent, edge[1]);
                int weight = edge[2];

                // if u and v are not in the same set, then add the edge to the mst make them union / connected

                if (u != v)
                {
                    mst.push_back(edge);
                    totalCost += weight;
                    unionSet(u, v, parent, rank);
                }
            }

            cout << "Minimum Spanning Tree: " << endl;
            cout << totalCost << endl;

        }
};

int main()
{
    kruskal kl;
    vector<vector<int>> edges;
    edges.push_back({1, 2, 2}); 
    edges.push_back({1, 4, 1}); 
    edges.push_back({1, 5, 4}); 
    edges.push_back({4, 5, 9}); 
    edges.push_back({4, 3, 5}); 
    edges.push_back({4, 2, 3}); 
    edges.push_back({2, 3, 3}); 
    edges.push_back({3, 6, 8}); 
    edges.push_back({2, 6, 7}); 

    kl.solve(edges, 6);

    return 0;
} 