#include <stdio.h>
int fact(int n);
int main(void) {
	// your code goes here
	int t;
	 int temp,sum,n;
	scanf("%d",&t);
	while(t--)
	{
	   scanf("%d",&n);
	   sum = 0;
	   sum = fact(n);
	   printf("%d",sum);	   
	}
	return 0;
}
int fact(int n)
{
	if(n==1)
	return 1;
   int sum = n*(fact(n-1));
   return sum;
}

