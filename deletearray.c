/* Write a program to copy the last n characters of a character array in another character array. Also, convert the lower case letters into upper case
letters while copying */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
 char str[15][25];
 int i=0;
 printf("Enter number of empl. names that u wnat to enter\n");
 scanf("%d",&j);
 printf("Enter Employees names to print\n");
 while(i<j)
 {
scanf("%[^\n]s",str[i]);
    // gets(str[i]);
     i++;
 }
printf("\nPrinting\n");
i=0;
while(i<j);
{
    printf("%s",str[i]);
   // puts(str[i]);
    printf("\n");
    i++;
}
}