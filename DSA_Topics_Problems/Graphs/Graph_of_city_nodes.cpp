#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    unordered_map<string, vector<pair<string, double>>> cal;

    double search(string &a, string &b, map<string, int> &visited, double value)
    {
        
        if (visited.count(a) == 0)
        {
            visited[a] = 1;
            for (auto i : cal[a])
            {
                double ans = value * i.second;
                if (i.first == b)
                    return ans;

                   double tmp =  search(i.first, b, visited, ans);
                   if(tmp > -1)
                   return tmp;
               
            }
           
        }
       
        return -1;
    }

    vector<double> calcEquation(vector<vector<string>> &equations, vector<double> &values, vector<vector<string>> &queries)
    {

        vector<double> ans;
        for (int i = 0; i < equations.size(); i++)
        {
            cal[equations[i][0]].push_back(make_pair(equations[i][1], values[i]));
            cal[equations[i][1]].push_back(make_pair(equations[i][0], 1 / values[i]));
        }

        for (int i = 0; i < queries.size(); i++)
        {
            if (queries[i][0] == queries[i][1] && cal.count(queries[i][0]))
                ans.push_back(1);
            else
            {
                map<string, int> visited;
                ans.push_back(search(queries[i][0], queries[i][1], visited, 1.0));
                visited.clear();
            }
        }

        return ans;
    }
};

int main()
{

    // [["x1","x2"],["x2","x3"],["x3","x4"],["x4","x5"]]
    //   [3.0,4.0,5.0,6.0]
    //    [["x1","x5"],["x5","x2"],["x2","x4"],["x2","x2"],["x2","x9"],["x9","x9"]]
    Solution sol;

    vector<vector<string>> equations = {{"x1", "x2"}, {"x2", "x3"}, {"x3", "x4"}, {"x4", "x5"}};
    vector<double> values = {3.0, 4.0, 5.0, 6.0};
    vector<vector<string>> queries = {{"x2", "x4"}};
    vector<double> ans = sol.calcEquation(equations, values, queries);
    for (auto i : ans)
        cout << i << " ";
}
