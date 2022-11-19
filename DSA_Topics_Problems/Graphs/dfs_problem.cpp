#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void DFSUtil(ll v, map<ll, vector<ll>> &adj, map<ll, bool> &visited, vector<set<ll>> &ans, set<ll> &uset)
{
    // Mark the current node as visited and print it
    visited[v] = true;
    // cout << v << " ";
    uset.insert(v);
    // Recur for all the vertices adjacent to this vertex
    vector<ll>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        if (!visited[*i])
        {
            DFSUtil(*i, adj, visited, ans, uset);
        }
        if (uset.size() > 1)
            ans.push_back(uset);
        uset.clear();
        uset.insert(v);
    }
}

// The function to do DFS traversal. It uses recursive
// DFSUtil()
void DFS(map<ll, vector<ll>> &adj, vector<set<ll>> &ans)
{
    // Call the recursive helper function to print DFS
    // traversal starting from all vertices one by one
    map<ll, bool> visited;

    for (auto i : adj)
        if (visited[i.first] == false)
        {
            set<ll> uset;
            DFSUtil(i.first, adj, visited, ans, uset);
        }
}

int main()
{
    vector<ll> num = {
        9810098100,
        9891098910,
        9810098101,
        9891012345,
        9988665544,
        9891012344,
        9898989898,
        9810198100,
        9891112346,
        9890912344,
        9810098099,
        9810098102,
        9810098103,
        9810198101

    };
    map<ll, vector<ll>> umap;

    for (auto i : num)
    {
        bool check = false;
        vector<ll> temp = {i + 1, i - 1, i + 100000, i - 100000};
        for (auto it : temp)
        {
            if (find(num.begin(), num.end(), it) != num.end())
            {

                umap[i].push_back(it);
                check = true;
            }
        }

        // vector<ll> emtpy;
        // umap[i] = emtpy;
    }

    // for(auto m : umap)
    // {
    //     if(m.second.size() == 0)
    //     {
    //          auto it1 = umap.find(m.first);
    //          umap.erase(it1);
    //     }
    // }
    for (auto m : umap)
    {
        cout << m.first << " ==>> ";
        for (auto i : m.second)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << "\n\n\n";
    vector<set<ll>> ans;
    DFS(umap, ans);
    set<ll>::iterator itr;

    for (auto s2 : ans)
    {
        for (itr = s2.begin(); itr != s2.end(); itr++)
        {
            cout << *itr << " ";
        }
        cout << endl;
    }
}