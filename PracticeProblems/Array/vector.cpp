#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec = {1,2};
    vec.push_back(3);
    vec.pop_back();
    
    for(auto i : vec)
    cout << i << " ";
}