#include <bits/stdc++.h>
using namespace std;

vector<int> countingSort(vector<int> vec, int n)
{
    for (int i = 0; i < n; cin >> vec[i], i++)
        ;
    map<int, int> count;
    // Here we are initializing every element of count to 0
    // from 1 to n
    for (int i = 0; i < n; count[i] = 0, i++)
        ;
    // Here we are storing count of every element
    for (int i = 0; i < n; count[vec[i]]++, i++)
        ;
    vector<int> sortedArr;
    int i = 0;
    while (n > 0)
    {
        // Here we are checking if the count[element] = 0
        // then incrementing for the next Element
        if (count[i] == 0)
        {
            i++;
        }
        // Here we are inserting the element into the
        // sortedArr decrementing count[element] and n by 1
        else
        {
            sortedArr.push_back(i);
            count[i]--;
            --n;
        }
    }
    return sortedArr;
}

void printArr(vector<int> vec, int n)
{
    cout << "Sorted Array: ";
    for (int i = 0; i < n; cout << vec[i] << " ", i++)
        ;
    cout << endl;
}
int main()
{
    vector<int> vec1 = {6, 0, 7, 8, 7, 2, 0};
    vector<int> sortedArr1 = countingSort(vec1, vec1.size());
    printArr(sortedArr1, sortedArr1.size());

    vector<int> vec2 = {4, 8, 1, 0, 1, 1, 0, 0};
    vector<int> sortedArr2 = countingSort(vec2, vec2.size());
    printArr(sortedArr2, sortedArr2.size());

    return 0;
}
