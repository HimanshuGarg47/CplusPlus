#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[1000], c, line[15][70];
    int i = 0, k = 0, j, l = 0;
    int n, m;
    printf("\nEnter a short story\n");
    printf("Enter * to end\n\n");
    while ((c = getchar()) != '*')
    {
        str[i] = c;
        i++;
    }
    str[i] = '\0';
    puts(str);
    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        if (str[i] != '.')
        {
            line[k][j++] = (char)k + 49;
            line[k][j++] = '.';
            line[k][j++] = ' ';

            while (str[i] != '.')
            {
                line[k][j++] = str[i++];
            }
            line[k][j++] == '\0';
            k++;
            i++;
        }
    }
    printf("\n%d\n", i);
    i = 0;
    while (i < k)
    {
        puts(line[i]);
        printf("\n");
        i++;
    }
    /* printing story in lines */
    printf("\nEnter number of lines to print and start from mth line\n");
    scanf("%d %d", &n, &m);
    i = 0;
    m = m - 1;
    while (i < n)
    {
        puts(line[m++]);
        i++;
    }
}