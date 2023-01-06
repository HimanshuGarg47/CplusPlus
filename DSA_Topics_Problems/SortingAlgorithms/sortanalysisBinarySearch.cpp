// implementation and time analysis of binary searching....
#include <iostream>
#include <sys/time.h>
using namespace std;
struct timeval t1, t2;

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
        {
            cout << "\nData is Found at Location : " << i;
            return 0;
        }
    cout << "Data is Not Found";
    return -1;
}

void bin_srch(int n, int x[], int find)
{
    int beg, end, mid;
    beg = 1;
    end = n;
    mid = (beg + end) / 2;
    while (beg <= end && x[mid] != find)
    {
        if (x[mid] < find)
            beg = mid + 1;
        else
            end = mid - 1;

        mid = (beg + end) / 2;
    }

    if (x[mid] == find)
    {
        cout << "\nData is Found at Location : " << mid;
    }
    else
    {
        cout << "Data is Not Found";
    }
}
int main()
{
    int a[100], n, i, srch;
    double t;
    cout << "\n------------ BINARY SEARCH ------------ \n\n";
    cout << "Enter No. of Elements= ";
    cin >> n;

    cout << "\nEnter Elements ::-\n";
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    gettimeofday(&t1, '\0');
    for (i = 1; i <= n - 1; i++)
    {
        for (int j = n; j >= i + 1; j--)
        {
            int temp;
            if (a[j] < a[j - 1])
            {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    cout << "Sorted Element is:";
    for (i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n\nEnter Item you want to Search ::- ";
    cin >> srch;
    bin_srch(n, a, srch);
    gettimeofday(&t2, '\0');
    t = (double)(t2.tv_usec - t1.tv_usec) / 1000000 + (double)(t2.tv_usec - t1.tv_usec);
    cout << "\n\n Time required for binary searching is :" << t << " usec." << endl;

    cout << "\n------------ Linear SEARCH ------------ \n\n";
    cout << "Enter No. of Elements= ";
    cin >> n;

    cout << "\nEnter Elements ::-\n";
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    gettimeofday(&t1, '\0');

    cout << "\n\nEnter Item you want to Search ::- ";
    cin >> srch;
    search(a, n, srch);
    gettimeofday(&t2, '\0');
    t = (double)(t2.tv_usec - t1.tv_usec) / 1000000 + (double)(t2.tv_usec - t1.tv_usec);
    cout << "\n\n Time required for linear searching is :" << t << " usec." << endl;
    system("pause");
    return 0;

}