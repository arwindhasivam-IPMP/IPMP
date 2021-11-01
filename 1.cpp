#include<iostream>
#include<conio.h>
using namespace std;

class swapping
{
public:
    int a,b,temp;

    void swapno()
    {
        cout<<"Enter the numbers \n";
        cin>>a>>b;
        temp=a;
        a=b;
        b=temp;
        cout<<"The numbers are  "<<a<<" "<<b;
    }
};

int main()
{
    swapping n;
    n.swapno();
    return 0;
}
