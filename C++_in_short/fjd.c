#include <stdio.h>

int main(void)
{
	// your code goes here
short int A[3],B[3],D,F,C;
int T;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d %d",&D,&C);
	    scanf("%d %d %d",&A[0],&A[1],&A[2]);
	    scanf("%d %d %d",&B[0],&B[1],&B[2]);
	    if(A[0],A[1],A[2],B[0],B[1],B[2]<=100 && D,C <=100)
	    {
	    F=D+D;
	    if((A[0]+A[1]+A[2] >=150 && B[0]+B[1]+B[2] >=150))
	    {
	        if(C<F)
	        printf("YES\n");
	         else
            printf("NO\n");
	    }
	  else if((A[0]+A[1]+A[2] >=150 || B[0]+B[1]+B[2] >=150))
	    {
	        if((C+D)<F)
	        printf("YES\n");
	         else
            printf("NO\n");
	    }  
	   }
	    
           
	}
	return 0;
}

