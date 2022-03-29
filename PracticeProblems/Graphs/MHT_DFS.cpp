// C++ program to print DFS
// traversal for a given given
// graph
#include <bits/stdc++.h>
using namespace std;

class Graph
{

    // A function used by DFS
    int DFSUtil(int v, int count);

public:
    map<int, bool> visited;
    map<int, list<int>> adj;
    // function to add an edge to graph
    void addEdge(int v, int w);

    // prints DFS traversal of the complete graph
    map<int, int> DFS();
};

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
    adj[w].push_back(v);
}

int Graph::DFSUtil(int v, int count)
{
    // Mark the current node as visited and print it
    visited[v] = true;
    cout << v << " ";
    // static int count = 0;
    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
        {
            int x =  DFSUtil(*i, count + 1);
            visited[v] = false;
            return x;

        }
            else
            {visited[v] = false;
             return count;}
        
    
}

// The function to do DFS traversal. It uses recursive
// DFSUtil()
map<int, int> Graph::DFS()
{
    // Call the recursive helper function to print DFS
    // traversal starting from all vertices one by one
    map<int, int> count;
    for (auto i : adj)
    {          

        count[i.first] = DFSUtil(i.first, 0);
        cout << "\n";
        
    }
    // if (visited[i.first] == false)
    return count;
}

// Driver Code
int main()
{
    // Create a graph given in the above diagram
    Graph g;
    // g.addEdge(3, 4);
    // g.addEdge(3, 2);
    // g.addEdge(4, 5);
    // g.addEdge(3, 1);
    // g.addEdge(3, 4);
    // g.addEdge(3, 0);
    // [[1,0],[1,2],[1,3]]
    g.addEdge(1,0);
    g.addEdge(1,2);
    g.addEdge(1,3);
    cout << "Following is Depth First Traversal \n";
    map<int, int> ans = g.DFS();
    for(auto i : ans)
    {
        cout << "\n" << i.second << " " << i.first;
    }

    return 0;
}
// improved by Vishnudev C
