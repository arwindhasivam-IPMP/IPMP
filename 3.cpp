#include <iostream>
#include <math.h>
#define PI 3.14259
using namespace std;

class polar{
    friend void add(polar,polar);
    friend void sub(polar,polar);
    friend void angle(polar,polar);

    public:
    float radius,angle,rad,x,y;
};

void add(polar p1, polar p2){
    cout<<":Addition:"<<endl;
    cout<<"X-coordinate="<<p1.x+p2.x<<endl<<"Y-coordinate="<<p1.y+p2.y<<endl;
}

void sub(polar p1, polar p2){
    cout<<":Subtraction:"<<endl;
    cout<<"X-coordinate="<<p1.x-p2.x<<endl<<"Y-coordinate="<<p1.y-p2.y<<endl;
}
void angle(polar p1, polar p2){
    cout<<"Angle difference="<<p1.angle-p2.angle<<endl;
}


int main()
{
    polar p1,p2,sum,diff;
    cout<<"Enter the point1's radius and angle:";
    cin>>p1.radius>>p1.angle;
    cout<<"Enter the point2's radius and angle:";
    cin>>p2.radius>>p2.angle;

    p1.rad= p1.angle * PI/ 180;
    p2.rad= p2.angle * PI/ 180;

    p1.x=p1.radius*(cos(p1.rad));
    p2.x=p2.radius*(cos(p2.rad));
    p1.y=p1.radius*(sin(p1.rad));
    p2.y=p2.radius*(sin(p2.rad));

    add(p1,p2);
    sub(p1,p2);
    angle(p1,p2);

    cout<<"Converting to Polar form--->";

    sum.radius=abs((p1.x+p2.x)/(cos(p1.angle+p2.angle)));

    diff.radius=abs((p1.y-p2.y)/(sin(p1.angle-p2.angle)));

    cout<<"The Sum radius="<<sum.radius<<endl;
    cout<<"The difference radius="<<diff.radius<<endl;

    return 0;
}
