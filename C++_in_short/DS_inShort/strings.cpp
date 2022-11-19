#include <iostream>
#include  <stdio.h>
using namespace std;
/* finding duplicate elements by using 3 methods
1. comparing each elements
2. using hashtable
3. using bit */

int main()
{
    // char str[] = "Hello World";
    // int i,k,j,n=11;
    // for(i=0;i<n-1;i++)
    // {
    //     for(j = i+1;j<n;j++)
    //     {
    //         if(str[i] == str[j])
    //         {
    //             for(k = j;k<n-1;k++)  // Here we can also use another string and copy only single charaters,which is better approach
    //             {
    //                 str[k] = str[k+1]; 
                      
    //             }
    //             str[k] = '\0';
    //             n--;
    //         }
    //     }
    // }

    // cout << str << endl;



// using hashing method
        char str[] = "finding";
    int i;
    int H[26] = {0};
    for(i=0;str[i]!='\0';i++)
    {
        H[str[i]-97] += 1;

    }
    for(i=0;i<26;i++)
    {
        if(H[i] > 1)
        {
            printf("%c",i+97);
            printf("%d\n",H[i]);
        }
    }
   
}
