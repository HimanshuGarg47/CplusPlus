/* 
#include <bits/stdc++.h>
using namespace std;

class Room
{
    int length;
    int width;
public:
    // Room()
    // {
    //     length = width = 0;
    // }

    Room(int value = 0)
    {
        length = width = value;
    }

    void display()
    {
        cout << length << ' ' << width;
    }
};
int main()
{
   Room objRoom1(4);
   objRoom1.display();
}

*/

#include <bits/stdc++.h>
using namespace std;

class Room
{
    int length;
    int width;
    static int copyConsCount;
public:
     Room()
    {
        length = 12;
        width = 8;
    }

    Room(Room &r)
    {
        width = r.width;
        length = r.length;
        copyConsCount++;
    }
    void dispCopyConsCount()
    {
        cout << copyConsCount;
    }
};

int Room::copyConsCount = 0;
int main()
{
   Room objRoom1;
   Room objRoom2(objRoom1);
   Room objRoom3 = objRoom1;
   Room objRoom4;

   objRoom4 = objRoom3;

   objRoom4.dispCopyConsCount();

}