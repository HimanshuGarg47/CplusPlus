#include <bits/stdc++.h>
#define vib vector<vector<bool>>
using namespace std;

void display(vib dis)
{
    for (vector<bool> v : dis)
    {
        for (bool ch : v)
        {
            if (ch)
                cout << "O ";
            else
                cout << "K ";
        }
        cout << endl;
    }
}

bool isSafe(vib mat, int r, int c)
{
    if (r >= 2)
    {
        if (c >= 1)
        {
            if (!mat[r - 2][c - 1])
                return false;
        }
        if (mat.size() - 1 > c)
        {
            if (!mat[r - 2][c + 1])
                return false;
        }
    }
    if (r >= 1)
    {
        if (c >= 2)
        {
            if (!mat[r - 1][c - 2])
                return false;
        }
        if (mat.size() - 2 > c)
        {
            if (!mat[r - 1][c + 2])
                return false;
        }
    }
    return true;
}
int Knightsbycol(vib mat,int c)  // by col
{
    if (c == mat.size())
    {
        display(mat);
        cout << endl;
        return 1;
    }

    int count = 0;
    for (int i = 0; i < mat.size(); i++)
    {
        if (isSafe(mat, i, c))
        {
            mat[i][c] = false;
            count += Knightsbycol(mat, c + 1);
            mat[i][c] = true;
        }
    }
    return count;
}


int Knights(vib mat, int r)    //  by row
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
            count += Knights(mat, r + 1);
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

    vib mat1 = {{true, true, true, true},
                {true, true, true, true},
                {true, true, true, true},
                {true, true, true, true}};
    cout << endl
         << Knights(mat, 0) << endl;

     cout << "\n\n\n\n\n\n";
    cout  << Knightsbycol(mat,0) << endl;
    system("pause");
}