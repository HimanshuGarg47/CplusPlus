//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	    
	    int mini = 501;
	    for(int i = 0;i<V;i++)
	    {
	        int visited[V] = {0};
            int temp = DFS(visited, adj,V,i,1);
	        if(temp == V)
	        {
	           
	            mini = min(mini,i);
	        }
	        
	    }
	    if(mini == 501)
	   return -1;
	   else 
	   return mini;
	}
	
	int DFS(int visited[], vector<int>adj[],int &V,int u,int count)
	{
	    
	    
	    if(visited[u])
	    return 0;
	    
	    visited[u] = 1;
	    
	    for(auto w : adj[u])
	    {
	       count +=  DFS(visited, adj,V,w,1);
	        
	    }
	  //  visited[u] = 0;
	    return count;
	}

};

//{ Driver Code Starts.
int main(){
    
#ifndef ONLINE_JUDGE
    freopen("../FILES/input.txt", "r", stdin);
    freopen("../FILES/output.txt", "w", stdout);
#endif
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends