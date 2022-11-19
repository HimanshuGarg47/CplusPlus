#include <stdio.h>

int power(int m,int n){
    if(n==0)
    return 1;
    if(n%2==0)
    return power(m*m,n/2);
    else
    return power(m*m,(n-1)/2)*m;
}
int main(){
    printf("Power of 2 raise to 5 is %d",power(3,11));
}