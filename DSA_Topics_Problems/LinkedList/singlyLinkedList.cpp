#include <stdio.h>
#include "Chains.h"

void print()
{
    printf("fjdifjij#pragma endregion");
}
int hash(int key)
{
    return key % 10;
}
void Insert(struct Node *H[], int key)
{
    int index = hash(key);
    SortedInsert(&H[index], key);
}


int main()
{ 
    print();
        printf("himanshu\n");

    struct Node *HT[10];
    struct Node *temp;
    int i;
    printf("hello\n");
    for (i = 0; i < 10; i++)
        HT[i] = NULL;

    Insert(HT, 12);
    Insert(HT, 22);
    Insert(HT, 42);
    printf("hi\n");
    temp = Search(HT[hash(21)], 21);
    printf("hallaaa\n");
    printf("%d ", temp->data);

    return 0;
}