#include <stdio.h>
int main()
{

     int n;
    printf("Enter size of array to sort\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements\n\n",n);
    for(int i =0;i<n;i++)
    scanf("%d",&arr[i]);

  for(int i=1;i<n;i++)
  {

      int current = arr[i];
      int j = i-1;
      while(arr[j] > current && j>=0)
      {

          arr[j+1] = arr[j];
          j--;
      }
      arr[j+1] = current;
  }



    printf("\n\n");


    for(int i =0;i<n;i++)
    {

        printf("%d\t",arr[i]);
    }
}
