#include <bits/stdc++.h>
using namespace std;
int coun = 0;
void Comb(vector<int> &vec, vector<int> &vec1, vector<int> ans, int start, int &end, int index)
{

    if (index == 2)
    {
        int k = ans[0], l = ans[1];
        if (vec[k] == vec1[l] && vec[l] == vec1[k])
            coun++;
        return;
    }
    for (int i = start; i <= end && end - i + 1 >= 2 - index; i++)
    {
        ans[index] = i;
        Comb(vec, vec1, ans, i + 1, end, index + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        coun = 0;
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        map<pair<int, int>, int> u_map;
        for (int i = 0; i < n; i++)
        {
            // if (u_map.find(make_pair(a[i], b[i])) == u_map.end())
            //     u_map[make_pair(a[i], b[i])] = 1;
            // else
                u_map[make_pair(a[i], b[i])]++;
        }
        int ans = 0;
        for (auto it : u_map)
        {
            int l = it.first.first, r = it.first.second;
        //   (u_map.find(make_pair(r, l)) != u_map.end())
        //     {
                if (l != r)
                    ans += (u_map[{l,r}] * u_map[{r, l}]);
                else 
                    ans += (it.second*(it.second-1))/2;
                u_map[{r,l}] = 0;
                u_map[{l,r}] = 0;

            //  auto ptr = u_map.find(make_pair(r,l));

            //     u_map.erase(ptr);
            // }
            // else
            // continue;
        }
        cout << ans << endl;
    }
}