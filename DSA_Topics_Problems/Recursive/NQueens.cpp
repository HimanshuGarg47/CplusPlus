#include <bits/stdc++.h>
#define vib vector<vector<bool>>
using namespace std;

void display(vib &dis)
{
    for (vector<bool> v : dis)
    {
        for (bool ch : v)
        {
            if (ch)
                cout << "X ";
            else
                cout << "Q ";
        }
        cout << endl;
    }
}

bool isSafe(vib &mat, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        if (!mat[i][c])
            return false;
    }

    int mini = min(r, c);
    for (int i = 1; i <= mini; i++)
    {
        if (!mat[r - i][c - i])
            return false;
    }
    int temp = mat.size() - c - 1;
    int maxc = min(r, temp);

    for (int i = 1; i <= maxc; i++)
    {
        if (!mat[r - i][c + i])
            return false;
    }
    return true;
}
int queens(vib &mat, int r)
{
    if (r == mat.size())
    {
        display(mat);
        cout << endl;
        return 1;
    }

    int count = 0;
    for (int i = 0; i < mat.size(); i++)
    {
        if (isSafe(mat, r, i))
        {
            mat[r][i] = false;
            count += queens(mat, r + 1);
            mat[r][i] = true;
        }
    }
    return count;
}

int main()
{
    vib mat = {{true, true, true, true, true, true, true, true},
               {true, true, true, true, true, true, true, true},
               {true, true, true, true, true, true, true, true},
               {true, true, true, true, true, true, true, true},
               {true, true, true, true, true, true, true, true},
               {true, true, true, true, true, true, true, true},
               {true, true, true, true, true, true, true, true},
               {true, true, true, true, true, true, true, true}

    };
    cout << endl
         << queens(mat, 0) << endl;
    system("pause");
}