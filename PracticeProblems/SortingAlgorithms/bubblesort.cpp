#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void BubbleSort(vector<int> &vec, int n)
{
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                swap(vec[j], vec[j + 1]);
                check = false;
            }
        }
        if (check)
            break;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../includes/input.txt", "r", stdin);
    freopen("../includes/output.txt", "w", stdout);
#endif

    int temp = 0, n;
    cout << "Enter size of array\n";
    cin >> n;
    vector<int> vec;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter A[" << i << "]" << "element = ";
        cin >> temp;
        vec.push_back(temp);
    }
    BubbleSort(vec, n);

    cout << "\nSorted elements are : [";
    for (int i = 0; i < n - 1; i++)
    {
        if (i < n - 1)
            cout << " " << vec[i] << ",";
    }
    cout << vec[n - 1] << " ]\n";
    system("pause");
    return 0;
}