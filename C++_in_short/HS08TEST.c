#include <stdio.h>

int main() {
	// your code goes here
    short int with_drw;
	float acc,j;
    acc = j = with_drw =0;
	scanf("%hi %f",&with_drw,&acc);
    j=(acc-(float)with_drw)-0.50;
	if((with_drw%5) == 0 && j>=0)
	{
	  printf("%.2f",j);
      
	}
	else
	printf("%.2f",acc);
	return 0;
}

