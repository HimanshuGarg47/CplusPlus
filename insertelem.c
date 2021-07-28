//#include <conio.h>
#include <stdio.h>
int main()
{
int i, n, num, pos, arr[10];
//clrscr();
printf("\n Enter the number of elements in the array : ");
scanf("%d", &n);
for(i=0;i<n;i++)
{
printf("\n arr[%d] = ", i);
scanf("%d", &arr[i]);
}
printf("\n Enter the number to be inserted : ");
scanf("%d", &num);
//printf("\n Enter the position at which the number has to be added :");
//canf("%d",&pos);
for(i=0;i<n;i++)
{
    if(arr[i]>num)
    {
        for(int j = n-1;j>=i;j--)
        arr[j+1]=arr[j];
        arr[i-1]=num;
    }

}
n++;
printf("\nSorted elements are:\n");
for(i=0;i<n;i++)
printf("\t%d",arr[i]);
}