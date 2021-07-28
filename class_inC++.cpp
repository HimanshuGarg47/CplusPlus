#include <iostream>
#include <stdlib.h>
using namespace std;
class Rectangle
{
   private: int length;
   private:  int breadth;
    
    public: Rectangle(int l,int b){
        length = l;
        breadth = b;
    }

    public: int Area()
    {
        return length*breadth;
    }

    public: 
    void changelength(int l){
        length = l;
    }


};

int main()
{
    cout << "Enter length and breadth \n" << endl;
    int a,b;
    cin >> a >> b;
    Rectangle r(a,b);
    cout << r.Area() << endl;
    r.changelength(83);
    cout << r.Area() << endl;


}

