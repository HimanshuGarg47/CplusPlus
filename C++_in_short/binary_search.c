#include <stdio.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int j,i,n , found = 0,element;
    printf("Enter size of an array to create\n");
    scanf("%d",&n);
    int bin[n];
    printf("Enter elements in an array of size %d\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&bin[i]);
    }

    for(i=0;i<n-1;i++)  // Here we are sorting an array
    {
        for(j=0;j<n-1-i;j++)
        {
            if(bin[j+1] < bin[j])
            {
                swap(&bin[j+1],&bin[j]);
                found =1;
            }
        }
        if(found == 0)
        break;
    }            // end of for loop
 
printf("\n");
 for(i=0;i<n;i++)
 printf("%d\t",bin[i]);

printf("\nEnter element to search\n");
scanf("%d",&element);

int mid,LB,UB;
found = 0;
LB = 0;
UB = n;
mid =  (UB+LB)/2;
while(LB <= UB)
{
    if(element == bin[mid])
    {
       found = mid;
        break;
    }
    else if(element < bin[mid])
    {
        UB = mid-1;
        mid = (UB+LB)/2;
    }
    else       // if(element > bin[mid])
    {
        LB = mid+1;
        mid = (UB+LB)/2; 
    }
    

}
    if(found == 0)
    printf("\nElement %d not found",element);
    else
    {
        printf("\nElement %d is found at pos %d",element,found+1);
    }



}