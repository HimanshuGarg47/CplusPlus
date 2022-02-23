#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void del(char a[],char b[]);
int main()
{
    char text[100],pattern[20];
    printf("Enter text\n");
    gets(text);
    printf("\nEnter pattern to search\n");
    gets(pattern);
    del(text,pattern);
}
void del(char a[],char b[])
{
    int pos,k,c,n,i=0,e,j,lenoftext,lenofpatt;
    lenofpatt=strlen(b);
    lenoftext=strlen(a);
    if(lenoftext < lenofpatt)
    {
        exit(1);
    }
    c=0;
    n= lenoftext-lenofpatt;
    while(i<=n)
    {
        j=0;
        e=i;
        pos=0;
        while(j<lenofpatt)
        {
            if(a[c]==b[j])
          {
                 pos++;
                 c++;j++;
          }
             else
             break;
        }
            if((pos)==lenofpatt)
                {
                 n=n-lenofpatt;
                   k=0;
                   while(k++ < lenofpatt)
                   {
                       e=i;
                       c=0;
                    while(c<lenofpatt)
                    {
                      a[e]=a[e+1];
                      e++;
                      c++;
                    }
                }

                         i++;
    }
    n=lenoftext+((2*lenofpatt)-n);
    a[i]='\0';
    printf("\nUpdated string is \n");
    puts(a);
    }
