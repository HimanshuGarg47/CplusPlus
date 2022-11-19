#include <stdio.h>

int main(void) {
	// your code goes here
    int t;

    scanf("%d",&t);
    while(t--)
    {
      int i,num_of_zero,num_of_one;
            char str[100000]={0};
        scanf("%c",&str);
       num_of_one = num_of_zero = i = 0;
        while(str[i++] != '\0')
        {
           if(str[i] == '1') 
           num_of_one+=1;
           else if(str[i] == '0')
           num_of_zero += 1;
           
        }
        if(num_of_one == 1 || num_of_zero == 1)
        printf("Yes\n");
        else
        printf("No\n");
    }
 	return 0;
}

