// #include <bits/stdc++.h>
// using namespace std;

// class Space
// {
//     int mCount;
// public:
//     Space()
//     {
//         mCount = 0;
//     }

//     Space(int a)
//     {
//         mCount = a;
//     }
//     Space operator++()
//     {
//         mCount++;
//         return Space(mCount);
//     }

//     Space operator++(int a)
//     {
//         mCount++;
//         return Space(mCount);
//     }


//     void display()
//     {
//         cout << mCount << endl;
//     }
// };
// int main()
// {
//    Space objSpace;
//    objSpace++;

//    objSpace.display();
// }


#include <bits/stdc++.h>
using namespace std;

enum WeekDays
{
    mSunday, mMonday, mTuesday, mWednesday, mThursday, mFriday, mSaturday
};

int operator==(WeekDays w1, WeekDays w2)
{
    if(w1 == 0 && w2 == 0)
    return 1;
    else
    return 0;
}
int main()
{
   WeekDays w1 = mSunday, w2 = mSunday;
   if(w1 == w2)
   cout << "Same day";
   else
   cout << "Different day";
}


// #include <bits/stdc++.h>
// using namespace std;

// class Room
// {
//     float mWidth;
//     float mLength;
// public:
//     Room()
//     {

//     }
//     Room(float w,float h)
//     {
//         mWidth = w, mLength = h;

//     }

//     operator float()
//     {
//         return mWidth*mLength;
//     }

//     float getWidth()
//     {
//         return mWidth;
//     }
// };

// int main()
// {
//    Room objRoom1(2.5, 2.5);
//    float fTotalArea;
//    fTotalArea = objRoom1;
//    cout << fTotalArea;
// }