#include <stdio.h>
#include <stdlib.h>

void allocate(int *p)
{
    p = (int *)malloc(sizeof(int));
}

int main()
{
    int *p = NULL;
    allocate(p);
    p = 42;
    printf("%d\n", p);
    free(p);
}