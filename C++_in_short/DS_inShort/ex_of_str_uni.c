#include <stdio.h>
#include <math.h>
int main()
{
 int T,sum,to_ad,temp;
 int i,arr[T],small=0;
 int j=0,ind_dig[9];
 scanf("%d",&T);
for(i=0;i<T;i++)
{
    scanf("%d",&arr[i]);
}
i=0;
while(i<T)
{
     int rem=99,quo=arr[i];
    while(quo!=0)
    {
        rem=quo%10;
        ind_dig[j]  = rem;
        quo=arr[i]/10;
        /* calculating */
        temp = arr[i]/(pow(10,j+1));
        to_ad = arr[i]/(pow(10,j));
        sum=(temp*(pow(10,j)))+to_ad;
        if(sum<small)
        small = sum;
        j++;
       // i--;
    }
    printf("\n\nSmallest of test case %d is %d",i+1,small);
     i++;
}


}