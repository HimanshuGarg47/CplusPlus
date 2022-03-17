#include <bits/stdc++.h>
using namespace std;

int retval(vector<vector<int>> &A)
{
    for(int i = 1;i<=A.size();i++)
    {
        for(int j = 1;j<=A.size();j++)
        {
            if(A[i][j] == 1)
            return A[i][j];
            
        }
    }
}
void BFS(vector<vector<int>> &A){
    int vtx = retval(A);
    
    queue<int> Q;
    int visited[A.size()+1] {0};
 
    // Initial
    
    visited[vtx] = 1;
    Q.emplace(vtx);
 
    // Explore
    while (!Q.empty()){
        int u = Q.front();  // Vertex u for exploring
        Q.pop();
        for (int v=1; v<=A.size(); v++){  // Adjacent vertices of vertex u
            if (A[u][v] == 1 && visited[v] == 0){  // Adjacent vertex and not visited
               visited[v] = 1;
                Q.emplace(v);
            }
        }
    }

    int cost = 0;
        for(int i = 1;visited[i]!=1 && i <= A.size();i++)    
        {
            visited[i] =1;
            cost++;
        }
        

        for(int i = A.size();visited[i]!=1 && i >= 1;i--)
        {
            cost++;
        }
        cout << cost << endl;
    
}
 



void fillmat(vector<vector<int>>&vec, int m)
{
    int u , v;

    for(int i = 0;i<m;i++)
    {
        cin >> u >> v;
        vec[u][v] =  vec[v][u] = 1;

    }

}



int main()
{
    int n,m,t;
    cin >> t;

    while(t--)
    {
        cin >> n >> m;
        vector<int> vec(n+1,0);
        vector<vector<int>> matrix;
        matrix.resize(n+1, vector<int>(n+1));
        fillmat(matrix,m);
        BFS(matrix);


      
        
    }
}