#include <bits/stdc++.h>
#define vib vector<vector<bool>>
using namespace std;

vector<string> retpath(string p, int i, int j)
{
    if (i == 1 && j == 1)
    {

        vector<string> vec;
        vec.push_back(p);
        return vec;
    }

    vector<string> l;
    vector<string> r;

    if (i > 1)
    {

        l = (retpath(p + "D", i - 1, j));
    }
    if (j > 1)
    {

        r = (retpath(p + "R", i, j - 1));
    }
    l.insert(l.end(), r.begin(), r.end());

    return l;
}
void path(string p, int i, int j)
{
    if (i == 1 && j == 1)
    {
        cout << p << endl;
        return;
    }

    int count = 0;

    if (i > 1)
    {

        path(p + "D", i - 1, j);
    }
    if (j > 1)
    {

        path(p + "R", i, j - 1);
    }
}

int count_path(int i, int j)
{
    if (i == 1 || j == 1)
        return 1;

    int count = 0;
    count += count_path(i - 1, j);
    count += count_path(i, j - 1);
    return count;
}

int diagonalcountpath(int i, int j) // right , down , and diagonal in matrix
{
    if (i == 1 || j == 1)
        return 1;

    int count = 0;
    count += diagonalcountpath(i - 1, j);
    count += diagonalcountpath(i - 1, j - 1);
    count += diagonalcountpath(i, j - 1);
    return count;
}

void diagonal_path(string p, int i, int j)
{
    if (i == 1 && j == 1)
    {
        cout << p << endl;
        return;
    }

    if (i > 1 && j > 1)
    {
        diagonal_path(p + "S", i - 1, j - 1);
    }
    if (i > 1)
    {

        diagonal_path(p + "D", i - 1, j);
    }
    if (j > 1)
    {

        diagonal_path(p + "R", i, j - 1);
    }
}

// if there is restriction in path lets say matrix[1][1] = false (restriction) we have to take another path

void pathRestrictins(string p, vector<vector<bool>> matrix, int i, int j)
{
    if (i == matrix.size() - 1 && j == matrix[0].size() - 1)
    {
        cout << p << endl;
        return;
    }

    int count = 0;
    if (matrix[i][j] == false)
        return;
    if (i < matrix.size() - 1)
    {

        pathRestrictins(p + "D", matrix, i + 1, j);
    }
    if (j < matrix[0].size() - 1)
    {

        pathRestrictins(p + "R", matrix, i, j + 1);
    }
}



void AllPaths(string p, vector<vector<bool>> &matrix, int i, int j)
{
    if (i == matrix.size() - 1 && j == matrix[0].size() - 1)
    {
        cout << p << endl;
        return;
    }

    int count = 0;
    if (!matrix[i][j])
        return;
        matrix[i][j] = false;
    if (i < matrix.size() - 1)
    {

        
        AllPaths(p + "D", matrix, i + 1, j);
    }
    if (j < matrix[0].size() - 1)
    {

       
        AllPaths(p + "R", matrix, i, j + 1);

    }
    if(i > 0)
    {
               
        AllPaths(p+"U",matrix,i-1,j);


    }
    if(j > 0)
    {
        
        AllPaths(p + "L",matrix,i,j-1);

    }
    /* this line at which function is over and while returning from here we are unchanging changes 
    made during find path */
    matrix[i][j] = true;
}



void TracePathAndPrint(string p,vib matrix, int r, int c,vector<vector<int>> path,int step)
{
    if (r == matrix.size() - 1 && c == matrix[0].size() - 1)
    {
        cout << p << endl;
        return;
    }

    
    if (!matrix[r][c])
        return;



        matrix[r][c] = false;
    if (r < matrix.size() - 1)
    {

        
        TracePathAndPrint(p + "D", matrix, r + 1, c, path,step+1);
    }
    if (c < matrix[0].size() - 1)
    {

       
        TracePathAndPrint(p + "R", matrix, r, c + 1, path,step+1);

    }
    if(r > 0)
    {
               
        TracePathAndPrint(p+"U",matrix,r-1,c, path,step+1);


    }
    if(c > 0)
    {
        
        TracePathAndPrint(p + "L",matrix,r,c-1, path,step+1);

    }
    /* this line at which function is over and while returning from here we are unchanging changes 
    made during find path */
    matrix[r][c] = true;
}
int main()
{
    vector<vector<bool>> ans = {{true,true,true},{true,true,true},{true,true,true}};
    vector<vector<int>> path(ans.size(),vector<int>(ans[0].size()));
    TracePathAndPrint("",ans,0,0,path,1);
        system("pause");
}