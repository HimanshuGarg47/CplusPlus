#include <stdio.h>
#include <string.h>
#define ARR 4
int main()
{
    int i=0,j=0,k=0;
    //int count=0,l=0;
    char str[25],sptr[ARR][15];
    printf("\nEnter text\n");
    gets(str);
    int arr=3;
    while(arr>=0)
    {
        if(arr==3)
        {
           j=0;
           sptr[arr][j++]=' ';
        do
        {
               sptr[arr][j++]=str[i++];
        }while (str[i]!=' ');
        //sptr[arr][j]=' ';
        sptr[arr][j]='\0';
        }

        else if(arr==2)
        {
           j=0;
        do
        {
            sptr[arr][j++] = str[i++];
        }while(str[i]!=' ');
      sptr[arr][j]=' ';
                sptr[arr][j]='\0';
        }

        else if(arr==1)
        {
                      j=0;
        do
        {
           sptr[arr][j++]=str[i++];
        }while(str[i]!=' ');
        sptr[arr][j]='\0';
        }

        else
        {
                      j=0;
        do
        {
            sptr[arr][j++]=str[i++];
        } while (str[i]!='\0');
        sptr[arr][j]='\0';
        }

      //  count++;
        arr--;
    }
   
   // printf("%s",sptr);
    for(i=0;i<4;i++)
    printf("%s",sptr[i]);
   // puts(ptr);

}