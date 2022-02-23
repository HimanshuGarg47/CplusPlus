#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


struct Node
{
    int breadth;
    int height;
};

void fun(struct Node *r1)
{
    r1->breadth = 20;
    r1->height = 34;
    cout << "breadth is " << r1->breadth << "\n" << "height is " << r1->height << endl;
}
int main()
{


//     int A[] = {2,4,6,8,10};
//     cout << sizeof(A)/sizeof(int) << endl;
//    int *a =  func(sizeof(A)/sizeof(int));
//    for(int i= 0;i<5;i++)
//    cout << a++ << endl;

struct Node r;
     r.height = 5;
     r.breadth = 10;
     fun(&r);
    cout << "breadth is " << r.breadth << "\n" << "height is " << r.height << endl;
    


    // Node r;
    // Node *p;
    // r.breadth = 20;
    // r.height = 10;
    // cout <<"height is " <<  r.height << "\n"   << "breadth is " << r.breadth << endl;
    // p = &r;
    // cout << p->height << endl << p->breadth<< endl;














   // int A[5] = {1,3,4,5,6};
//     int *p;
//     p = new int[5];   // in c++ // in heap
//     p[0] = 1;p[1] = 2;p[2] = 34 ; p[3] = 53; p[4] = 534;
//  //   p = A;
//    // cout << p << "\n" << A << endl;

//     for(int i = 0;i<5;i++)
//     printf("%d\n",*p++);
//     delete[] p;
    // int *p1;
    // char *p2;
    // float *p3;
    // double *p4;
    // long int *p5;
    // struct node *p6;

    // cout << sizeof(p1) << endl;
    // cout << sizeof(p2) << endl;
    // cout << sizeof(p3) << endl;
    // cout << sizeof(p4) << endl;
    // cout << sizeof(p5) << endl;
    // cout << sizeof(p6) << endl;

    // int a = 10;
    // int &r = a;  // reference is different from pointer in c++

    // int b = 392;
    // r = b;

    // a = 3220;
    // cout << a << endl << r << endl;




}