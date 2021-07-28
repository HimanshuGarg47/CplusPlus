#include <stdio.h>
void TOH(int n,int A,int B,int C){
    if(n == 0)  
    return;
    else{
        TOH(n-1,A,C,B);
        printf("(%d,%d)\n",A,C);
        TOH(n-1,C,B,A);
    }
}

int main()
{
    TOH(3,1,2,3);
}