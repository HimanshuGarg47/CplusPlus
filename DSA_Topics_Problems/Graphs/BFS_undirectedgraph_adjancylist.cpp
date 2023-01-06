// Program to print BFS traversal from a given
// source vertex. BFS(int s) traverses vertices
// reachable from s.
#include<bits/stdc++.h>

using namespace std;

// This class represents a directed graph using
// adjacency list representation
class Graph
{
	int V; // No. of vertices
    map<int,bool> visited;
    map<int,list<int>> adj;
    map<int,int>count;
	// Pointer to an array containing adjacency
	// lists
public:
	Graph(int V); // Constructor

	// function to add an edge to graph
	void addEdge(int v, int w);

	// prints BFS traversal from a given source s
   void BFSUtil(int s);
	void BFS();
};

Graph::Graph(int V)
{
	this->V = V;
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
    adj[w].push_back(v); // Add w to v’s list.

}

void Graph::BFSUtil(int s)
{
	// Mark all the vertices as not visited
	// bool *visited = new bool[V];
	for(int i = 0; i < V; i++)
		visited[i] = false;

	// Create a queue for BFS
	list<int> queue;
    vector<int> vec;

	// Mark the current node as visited and enqueue it
	visited[s] = true;
	queue.push_back(s);

	// 'i' will be used to get all adjacent
	// vertices of a vertex
	list<int>::iterator i;
    int cnt = 0;
	while(!queue.empty())
	{
		// Dequeue a vertex from queue and print it
		s = queue.front();
		cout << s << " ";
        if(vec.size() == V)
        break;
		queue.pop_front();

		// Get all adjacent vertices of the dequeued
		// vertex s. If a adjacent has not been visited,
		// then mark it visited and enqueue it
        bool check = false;
		for (i = adj[s].begin(); i != adj[s].end(); ++i)
		{
			if (!visited[*i])
			{
				visited[*i] = true;
                        vec.push_back(*i);
                        if(vec.size() == V)
                        {check = true;
                        break;}

				queue.push_back(*i);
			}
		}
        if(check)
        break;
        cnt++;
	}
    count[s] = cnt;
}


void Graph::BFS()
{
    for(auto i : adj)
    {
        BFSUtil(i.first);
        cout << "\n";
    }
    cout << "\n\n";
    for(auto i : count)
    {
        cout << i.first << " " << i.second << endl;
    }
}

// Driver program to test methods of graph class
int main()
{
	// Create a graph given in the above diagram
	Graph g(6);
    // [[3,0],[3,1],[3,2],[3,4],[5,4]]
	g.addEdge(3,0);
    g.addEdge(3,1);
    g.addEdge(3,2);
    g.addEdge(3,4);
    g.addEdge(5,4);

	cout << "Following is Breadth First Traversal "
		<< "(starting from vertex 2) \n";
	g.BFS();

	return 0;
}
