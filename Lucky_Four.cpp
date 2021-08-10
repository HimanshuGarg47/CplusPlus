#include <stdio.h>

int main()
{
    int t;
    int j, i, count;
    char str[11];
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    scanf("%d", &t);
    
    for (j = 0; j < t; ++j)
    {
        scanf("%s", str);
        count = 0;
        for(i = 0; str[i] != '\0'; ++i) {
            if(str[i] == '4') {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}