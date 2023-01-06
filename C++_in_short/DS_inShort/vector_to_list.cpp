#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    // input vector of integers
    // std::vector<int> src({ 1, 2, 3, 4, 5 });

    // std::list<int> dest(src.begin(), src.end());

    // for (const int &i: dest) {
    //     std::cout << i << " ";
    // }

    //  std::vector<int> src({ 1, 2, 3, 4, 5 });

    // std::list<int> dest;
    // std::copy(src.begin(), src.end(), std::back_inserter(dest));

    // for (const int &i: dest) {
    //     std::cout << i << " ";
    // }

    // std::vector<int> src({ 1, 2, 3, 4, 5 });

    // std::list<int> dest;
    // dest.insert(dest.begin(), src.begin(), src.end());

    // for (const int &i: dest) {
    //     std::cout << i << " ";
    // }

    // std::vector<int> src({ 1, 2, 3, 4, 5 });

    // std::list<int> dest;
    // dest.assign(src.begin(), src.end());

    // for (const int &i: dest) {
    //     std::cout << i << " ";
    // }




    

    vector<int> v{1, 2, 3, 4, 5, 7, 8, 9};

    list<int> ls;
    // int arr[v.size()];

    for_each(   v.begin(),
                v.end(),
                [&](const auto & elem){
                    ls.push_back(elem);
                });

    for (const int &i: ls) {
        std::cout << i << " ";
    }

    return 0;
}
