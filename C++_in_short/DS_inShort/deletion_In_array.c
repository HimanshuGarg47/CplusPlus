#include <stdio.h>
int main()
{
    int n,pos,item;
    printf("Enter number of elements in an array\n");
    scanf("%d",&n);
    int arr[n+1],i,j;
    
    printf("Enter elements in an array of size of %d\n",n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter element in index arr[%d] = ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter element to delete in an array\n");
    scanf("%d",&item);

    for(i=0;i<n;i++)
    {
        if(item == arr[i])
        {
            for(int j = i;i<n-1;i++)
            {
                arr[i] = arr[i+1];
            }
        }
    }
    

    
   
    // printing array after insertion
    printf("\nprinting array after deletion\n");
    for(i=0;i<n-1;i++)
    {
        printf("\narr[%d] = %d\n",i+1,arr[i]);

    }

    
    
}