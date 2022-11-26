#include <bits/stdc++.h>
using namespace std;

class class_2;
// interesting thing about friend function is they..
// ..can access private members of class (passed as objects in arguments in function)

class class_1
{
    int value;

public:
    void inidata(int x)
    {
        value = x;
    }
    void display(void)
    {
        cout << "value : " << value << "\n";
    }
    friend void exchange(class_1 &, class_2 &);
};

class class_2
{
    int data;

public:
    void inidata(int x)
    {
        data = x;
    }
    void display(void)
    {
        cout << "value : " << data << "\n";
    }
    friend void exchange(class_1 &, class_2 &);
};

/*  during defintion of friend function,
 Don't use friend keyword and scope resolution operator :: */
 void exchange(class_1 &a, class_2 &b)  
{
    int temp = a.value;
    a.value = b.data;
    b.data = temp;
}

int main()
{
    class_1 obj1;
    class_2 obj2;
    obj1.inidata(20);
    obj2.inidata(30);
    cout << "\nBefore swapping\n";
    cout << "obj1 "; obj1.display();
    cout << "obj2 "; obj2.display();
    exchange(obj1, obj2);
    
    cout << "\nAfter swapping\n";
    cout << "obj1 "; obj1.display();
    cout << "obj2 "; obj2.display();


}