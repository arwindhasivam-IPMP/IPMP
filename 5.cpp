#include<iostream>
#include<conio.h>
#include<string.h>
#include<math.h>
using namespace std;
 class rect
 {  public:
     double x1,y1,x2,y2,xs,ys,xa,ya,angle1;
     void add()
 {
     cout<<"Enter the coordinate 1: "<<endl;
     cin>>x1>>y1;
     cout<<"Enter the coordinate 2: "<<endl;
     cin>>x2>>y2;
     xa=x1+x2;
     ya=y1+y2;
     cout<<"The sum of the coordinates are: "<<xa<<" "<<ya<<endl;

 }
 void sub()
 {
     cout<<"Enter the coordinate 1: "<<endl;
     cin>>x1>>y1;
     cout<<"Enter the coordinate 2: "<<endl;
     cin>>x2>>y2;
     xs=x2-x1;
     ys=y2-y1;
     cout<<"The difference between the two points are: "<<xs<<" "<<ys<<endl;
 }
 void angle()
 {
     angle1=atan(ys/xs);
     cout<<"The angle is: "<<angle1;
 }

 };



 int main()
 {
     rect a;
     a.add();
     a.sub();
     a.angle();
     return 0;
 }
