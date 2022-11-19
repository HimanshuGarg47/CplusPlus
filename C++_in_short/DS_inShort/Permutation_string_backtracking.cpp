#include <iostream>
#include <stdio.h>
using namespace std;
void Perm(char s[],int k)
{
    static char Res[10];
    static int A[10] = {0};
    int i;
    if(s[k] == '\0')
    {
        Res[k] = '\0';
        cout << Res << endl;
    }
    for(i=0;s[i]!='\0';i++)
    {
        if(A[i]==0)
        {
            Res[k] = s[i];
            A[i] = 1;
            Perm(s,k+1);
            A[i] = 0;
        }
    }
}

// void swap(char *p, char *s)
// {
//     char temp;
//     temp = *p;
//     *p = *s;
//     *s = temp;
// }
// // 2nd method
// void Perme(char s[], int l, int h)
// {
//     int i;
//     if (l == h)
//     {
//         cout << s << endl;
//     }
//     else
//     {
//         for (i = l; i <= h; i++)
//         {
//             swap(s[i], s[l]);
//             Perme(s, l + 1, h);
//           ///  swap(s[i], s[l]);
//         }
//     }
// }
int main()
{
    char s[] = "ABC";
    Perm(s, 0);
}