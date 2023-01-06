// C++ program to demonstrate
// use of set for vectors

#include <bits/stdc++.h>
using namespace std;

set<vector<int>> set_of_vectors;

// Print elements of Vector
void Print_Vector(vector<int> Vec)
{
    for (int i = 0; i < Vec.size(); i++)
    {
        cout << Vec[i] << " ";
    }
    cout << endl;
    return;
}

// Driver code
int main()
{
    // Initializing some vectors
    vector<int> data_1{10, 20, 30, 40};
    vector<int> data_2{5, 10, 15};
    vector<int> data_3{1, 3, 5, 7, 9, 11, 13};
    vector<int> data_4{5, 10, 15};
    vector<int> data_5{10, 20, 30, 40};

    // Inserting vectors into set
    set_of_vectors.insert(data_1);
    set_of_vectors.insert(data_2);
    set_of_vectors.insert(data_3);
    set_of_vectors.insert(data_4);
    set_of_vectors.insert(data_5);

    // printing all the unique vectors in set
    vector<vector<int>> vec;
    cout << "Set of Vectors: \n";
    for (auto it = set_of_vectors.begin();
         it != set_of_vectors.end();
         it++)
    {
        vector<int> temp;
        for(auto i = (*it).begin();i!=(*it).end();i++)
        {
            temp.push_back(*i);
        }
        vec.push_back(temp);  
    }
    for(vector<int> i : vec)
    {
        for(int n : i)
        cout << (n) << " ";
        cout << endl;
    }
    return 0;
}
