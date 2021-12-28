
#include <iostream>
#include <stdio.h>
using namespace std;


int maxArea(int* height, int heightSize){
    int result = 1,compare = height[0];
    
    for(int j = 0;j<heightSize-2;j++)
    {
        for (int i = j+1;i<heightSize-1;i++)
       {
            if(height[i] > height[j])
        {
           compare = height[j]*(i-j);
        }
            else{
                compare = height[i]*(i-j);
            }
            if(compare > result)
            {
                result = compare;
            }
        
        
    }
   }
 return result;

}


int main()
{
    int arr[9] = {1,8,6,2,5,4,8,3,7};
    int result = maxArea(arr,sizeof(arr)/sizeof(int));
    // cout << result << endl;
    int arr1[5] = {1, 2, 3, 4, 5};
printf("Address of arr1      is %p\n",arr1);
printf("Address of &arr1     is %p\n",&arr1);
printf("Address of arr1 + 1  is %p\n",(arr1 + 1));
printf("Address of &arr1 + 1 is %p\n", (&arr1 + 1));

}