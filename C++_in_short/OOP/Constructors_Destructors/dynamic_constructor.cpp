#include <bits/stdc++.h>
using namespace std;

class String
{
    char *name;
    int length;
public:
    String()      // constructor-1
    {
        length = 0;
        name = new char[length+1];
    }
    
    String(char *s)  // constructor-2
    {
        length = strlen(s);
        name = new char[length + 1];   // one additional charactor for \0
        strcpy(name, s);
    }
    void display(void)
    {
        cout << name << "\n";
    }
    void join(String &a,String &b);
};

void String :: join(String &a, String &b)
{
    length = a.length + b.length;
    delete name;
    name = new char[length + 1];    // dynamic allocation

    strcpy(name, a.name);
    strcat(name, b.name);
}
int main()
{
     char *first = (char *)"Joseph ";
   String name1(first), name2((char *)"Louis "), name3((char *)"Lagrange"), s1, s2;

   s1.join(name1, name2);
   s2.join(s1, name3);
   name1.display();
   name2.display();
   name3.display();
   s1.display();
   s2.display();
   return 0;
}