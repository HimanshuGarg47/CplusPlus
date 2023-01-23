#include <bits/stdc++.h>
using namespace std;

class Polar
{
    float radius;
    float angle;       // in degree
public:
    Polar(float r = 0, float a = 0)
    {
        radius = r;
        angle = a;
    }


    float DegToRad(float deg)
    {
        return (deg)*(3.14159/180);
    }

    Polar operator+(Polar p)
    {
        cout << radius << " " << angle << endl;
        Polar res;
        float px = p.radius * cos(p.angle);
        float py = p.radius * sin(p.angle);

        float cx = radius * cos(angle);
        float cy = radius * sin(angle);
        
        float res_x = px + cx;
        float res_y = py + cy;

        float a = atan(res_y/res_x);
        float r = sqrt(res_x*res_x + res_y*res_y);

        return Polar(r,a);


    }

    void show()
    {
        cout << "radius : " << radius << endl;
        cout << "Angle : " << angle << endl;
    }
};
int main()
{
   Polar p1(4,45), p2(5,60);
   Polar p3 = p1 + p2;
   p3.show();

}