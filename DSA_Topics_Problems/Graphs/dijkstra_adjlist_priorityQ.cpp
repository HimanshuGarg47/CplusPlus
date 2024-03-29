#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, m , source;
   cin >> n >> m;
   vector<pair<int,int>> g[n+1]; // 1-indexed adjacency list for of graph

   int a,b,wt;
   for(int i = 0;i<m;i++)
   {
       cin >> a >> b >> wt;
       g[a].push_back(make_pair(b,wt));
       g[b].push_back(make_pair(a,wt));

   }

   cin >> source;
   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;   // min-heap; 
   vector<int> distTo(n+1,INT_MAX);    // 1-indexed array for calculating shortest path

   distTo[source] = 0;
   pq.push(make_pair(0,source));

   while(!pq.empty())
   {
       int dist = pq.top().first;      // weight
       int prev = pq.top().second;     // node
       pq.pop();

       for(auto it:g[prev])
       {
           int next = it.first;
           int nextDist = it.second;
           if(distTo[next] > dist + nextDist)
           {
               distTo[next] = distTo[prev] + nextDist;
               pq.push(make_pair(distTo[next],next));
           }
       }
   }

   cout << "The distance from source ," << source << ",are : \n";
   for(int i = 1;i<=n;i++)
   cout << distTo[i] << " ";
   cout << "\n";
   return 0;


}