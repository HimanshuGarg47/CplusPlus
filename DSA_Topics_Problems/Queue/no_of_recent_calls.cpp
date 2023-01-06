#include <bits/stdc++.h>
using namespace std;

class RecentCounter
{
public:
    int counter;
    vector<int> qs;

    RecentCounter()
    {
        counter = 0;
    }

    int ping(int t)
    {
       
        qs.push_back(t);

        int frange = t - 3000; // from where to start | [t-3000,t]
        if (frange < 1)
            frange = 1;

        while (counter < qs.size() && qs[counter] < frange)
            counter++;

        calls = qs.size() - counter;

        return calls;
    }
};

int main()
{
}