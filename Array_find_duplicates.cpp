#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1,3,3,4,5,6,7,8,8,10};
    int lastduplele = 0;
    int j;
    for(int i = 0;i < 10;i++)
    {
        if(arr[i] == arr[i+1] && arr[i] != lastduplele)
       {
           j = i+1;
           while(arr[j] == arr[i])j++;
            cout << "Duplicate element is " << arr[i] << " And it occurs " << j-i << " times " << endl;
        lastduplele = arr[i];
        i=j-1;
        }
    }

    // finding duplicate elements in unsorted array
    int arr1[10] = {8,3,6,4,6,5,6,8,2,7};
    int i,j,n = 10,count;
    for( i = 0;i<n-1;i++)
    {
        count = 1;
        if(arr1[i]!=-1)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr1[i] == arr1[j])
                {
                    count++;
                    arr1[j] = -1;
                }
            }
        }
        if(count > 1) cout << arr1[i] << " " << count;
    }
}