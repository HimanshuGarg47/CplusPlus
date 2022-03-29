#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<long int> vec(4);
        int temp;
        for (int i = 0; i < 4; i++)
        {
            cin >> temp;
            vec[i] = temp;
        }
        sort(vec.begin(), vec.end());

        long int xb,yb, ya;ds
        xb = (int)(vec[2] + sqrt((vec[2] * vec[2]) - (4 * vec[3]))) / 2;
        // ya = (vec[2]-sqrt((vec[2]*vec[2])-(4*vec[3])))/2;
        // xb = ((-1*vec[2])+sqrt((vec[2]*vec[2])-(4*vec[3]*(-1))))/-2;
        // yb = (-1*vec[2])-sqrt((vec[2]*vec[2])-(4*vec[3]*(-1)))/-2;

        ya = (int)(vec[2] - xb);

        if (xb != 0 && vec[0] < 0)
        {
            if (((xb * ya) == vec[3]) && (floor(ya / xb) == vec[1]) && ((ya - xb) == vec[0])  && xb > 0 && ya > 0 && xb < 10000 && ya < 10000)
                cout << ya << " " << xb << endl;
            else
                cout << "-1 -1" << endl;
        }
        else
            cout << -1 << " " << -1 << endl;
    }
}