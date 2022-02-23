// #include <iostream>

// using namespace std;

// template <class T>
// void Print(T& vec, int n, string s){
//     cout << s << ": [" << flush;
//     for (int i=0; i<n; i++){
//         cout << vec[i] << flush;
//         if (i < n-1){
//             cout << ", " << flush;
//         }
//     }
//     cout << "]" << endl;
// }

// void swap(int* x, int* y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// void SelectionSort(int A[], int n){
//     for (int i=0; i<n-1; i++){
//         int j;
//         int k;
//         for (j=k=i; j<n; j++){
//             if (A[j] < A[k]){
//                 k = j;
//             }
//         }
//         swap(&A[i], &A[k]);
//     }
// }

// int main() {

//     int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2};
//     int n = sizeof(A)/sizeof(A[0]);
//     Print(A, n, "\t\tA");

//     SelectionSort(A, n);
//     Print(A, n, " Sorted A");

//     return 0;
// }

#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = *a;
}
int main()
{
    int arr[6] = {4, 5, 8, 2, 9, 1};
    int n = 6 , j , k;
    for(int i = 0;i<= n-2;i++)
    {
        j = i+1;
        for(k = i;j<n;j++)
        {
            if(arr[j] < arr[k])
            k = j;
        }
            swap(arr[k],arr[i]);
    }

    for(int i = 0;i<n;i++)
    {
        cout << arr[i]  << " ";
    }
    
}