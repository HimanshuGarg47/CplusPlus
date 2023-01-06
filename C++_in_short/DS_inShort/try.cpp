#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    std::vector<int> src({ 1, 2, 3, 4, 5 });

    std::list<int> dest= {src.begin(), src.end()};
    //dest.assign(src.begin(), src.end());

    for (auto itr = dest.begin(); itr != dest.end(); ++itr)
    {
        cout << *itr << " ";
    }
    
}