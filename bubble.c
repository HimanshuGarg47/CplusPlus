#include <stdio.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *a = temp;
    
}
int main()
{
    int n;
    printf("Enter size of array to sort\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements",n);
    for(int i =0;i<n;i++)
    scanf("%d",&arr[i]);

    int flag = 0;

    for(int i = 0; i<n-1;i++)
    {

        for(int j= i+1; j < n-i-1; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(&arr[i],&arr[j]);
                flag = 1;
            }
        }
        
        if(flag == 0)
        break;
    }

}