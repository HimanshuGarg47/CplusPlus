#include <bits/stdc++.h>
using namespace std;
int main()
{
   int num[] = {56, 75, 22, 18, 90};
   int *ptr;
   int i;
   cout << "The arrays values are : ";
   for (i = 0; i < 5; i++)
   {
        cout << num[i] << " ";
   }
   cout << "\n";
   /* Initializing the base address of num to ptr*/
   ptr = num;
   /* Printing the value in the array   */
   cout << "\nValue of ptr : " << *ptr << endl;

   ptr++;
   cout << "\nValue of ptr++ : " << *ptr << endl;

   ptr--;
   cout << "\nValue of ptr--  : " << *ptr;

   ptr = ptr+2;
   cout << "\nValue of ptr+2 : " << *ptr << endl;

   ptr = ptr-1;
   cout << "\nValue of ptr-1 : " << *ptr << endl;

   ptr += 3;
   cout << "\nValue of ptr+=3 : " << *ptr << endl;
    
    ptr -= 1;
    cout << "\nValue of ptr-=1 : " << *ptr << endl;





   

}