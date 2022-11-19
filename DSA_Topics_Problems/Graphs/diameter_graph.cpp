// C++ program to find diameter of a binary tree
// using DFS.
#include <bits/stdc++.h>
using namespace std;

// Used to track farthest node.
class Graph
{
    int V; // No. of vertices
    map<int, bool> visited;
    map<int, list<int>> adj;
    // Pointer to an array containing adjacency
    // lists
public:
    Graph(int V); // Constructor

    // function to add an edge to graph
    void addEdge(int v, int w);

    // prints BFS traversal from a given source s
    void dfsUtil(int node, int count, bool visited[],
                 int &maxCount);
    void dfs(int node, int &maxCount);
    int diameter();
};

Graph::Graph(int V)
{
    this->V = V;
}
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}
// Sets maxCount as maximum distance from node.
void Graph::dfsUtil(int node, int count, bool visited[],
                    int &maxCount)
{
    visited[node] = true;
    count++;
    for (auto i = adj[node].begin(); i != adj[node].end(); ++i)
    {
        if (!visited[*i])
        {
            if (count >= maxCount)
            {
                maxCount = count;
                // x = *i;
            }
            dfsUtil(*i, count, visited, maxCount);
        }
    }
}

// The function to do DFS traversal. It uses recursive
// dfsUtil()
void Graph::dfs(int node, int &maxCount)
{
    bool visited[V];
    int count = 0;

    // Mark all the vertices as not visited
    for (int i = 0; i < V; ++i)
        visited[i] = false;

    // Increment count by 1 for visited node
    dfsUtil(node, count + 1, visited, maxCount);
}

// Returns diameter of binary tree represented
// as adjacency list.
int Graph::diameter()
{
    vector<pair<int,int>> count;
    int maxCount = INT_MIN;
    for (auto i : adj)
    {
        dfs(i.first, maxCount);
        count.push_back(make_pair(maxCount,i.first));
        // count[i.first] = maxCount;
        maxCount = INT_MIN;
        // cout << "\n";
    }
    /* DFS from a random node and then see
    farthest node X from it*/

    /* DFS from X and check the farthest node
    from it */
    // dfs(x,maxCount);
    sort(count.begin(),count.end());
    int temp = count[0].first;
    int i = 0;
    while(count[i].first == temp)
    {
        cout << "\n"
             << count[i].first << " diameter and node -> " << count[i].second;
             i++;
    }
}

/* Driver program to test above functions*/
int main()
{
    int V = 4;

    /* Constructed tree is
        1
        / \
        2 3
    / \
    4 5 */
    Graph g(V);
    /*create undirected edges */
    // [[3,0],[3,1],[3,2],[3,4],[5,4]]
    g.addEdge(3, 0);
    g.addEdge(3, 1);
    g.addEdge(3, 2);
    g.addEdge(3, 4);
    g.addEdge(5, 4);


        // [[1,0],[1,2],[1,3]]
    // g.addEdge(1,0);
    // g.addEdge(1,2);
    // g.addEdge(1,3);
    /* maxCount will have diameter of tree */
    g.diameter();
    return 0;
}
