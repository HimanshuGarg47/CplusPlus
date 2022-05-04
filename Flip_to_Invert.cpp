#include <bits/stdc++.h>
using namespace std;
int count(string s, int i, int j)
{
     int inv = 0;

    long int count_one = 0;
    for (; i <= j; i++)
    {
        if (s[i] == '1')
            count_one++;
        else
            inv += count_one;
    }
    return inv;
}

int fliponetozero(string s, int i, int j, int cn)
{
    for (long int l = i; l <= j; l++)
    {
        if (cn == 0)
            break;
        if (s[l] == '1') // flip 1 to 0  -------->>
        {
            s[l] = '0';
            cn--;
        }
    }
    return count(s, i, j);
}
int flipzerotoone(string s, int i, int j, int cn)
{
    for (long int l = j; l >= i; l--)
    {
        if (cn == 0)
            break;
        if (s[l] == '0')
        { // flip 0 to 1 from  <<------
            s[l] = '1';
            cn--;
        }
    }

    return count(s, i, j);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long int t;
    cin >> t;
    while (t--)
    {
        long int n, k;
        cin >> n >> k;
        string sta;
        sta.resize(n);
        for (int z = 0; z < n; z++)
        {
            cin >> sta[z];
        }

        if(n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if(n == 2 && sta[0] != '1' && sta[1]!='0')
        {
            cout << 0 << endl;
            continue;
        }
        long int cn = k;
         int i = 0, j = n - 1;
        while (sta[i] == '0' && i < n)
            i++;
        while (sta[j] == '1' && j >= 0)
            j--; // i , j values reserved for long
        if (i == n || j == -1)
        {
            cout << 0 << endl;
            continue;
        }

        cout << min(fliponetozero(sta, i, j, cn), flipzerotoone(sta, i, j, cn)) << endl;
        // long int zero = 0, one = 0;

        // for (long int l = i; l <= j; l++)
        // { // count one and zero
        //     if (sta[l] == '1')
        //         one++;
        //     else
        //         zero++;
        // }

        // if (one < zero)
        // {
        //     for (long int l = i; l <= j; l++)
        //     {
        //         if (cn == 0)
        //             break;
        //         if (sta[l] == '1') // flip 1 to 0  -------->>
        //         {
        //             sta[l] = '0';
        //             cn--;
        //         }
        //     }
        // }
        // else
        // {
        //     for (long int l = j; l >= i; l--)
        //     {
        //         if (cn == 0)
        //             break;
        //         if (sta[l] == '0')
        //         { // flip 0 to 1 from  <<------
        //             sta[l] = '1';
        //             cn--;
        //         }
        //     }
        // }

        // long int inv = 0;

        // long int count_one = 0;
        // for (; i <= j; i++)
        // {
        //     if (sta[i] == '1')
        //         count_one++;
        //     else
        //         inv += count_one;
        // }
        // cout << inv << endl;
    }
}