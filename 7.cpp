#include<iostream>
using namespace std;
class inventory
{
private:
    int prodID,qtyInStock;
    string description;
public:
    inventory(int prodID=100,int qtyInStock=0,string description="none")
    {
        this->prodID=prodID;
        this->description=description;
        this->qtyInStock=qtyInStock;
    }
    int remove_items(int a)
    {
        if(qtyInStock-a<0)
            return -1;
        qtyInStock-=a;
        return qtyInStock;
    }
};
int main()
{
    inventory pencils(234,45);
    inventory erasers(235,50,"used to erase");
    int temp1=pencils.remove_items(40);
    int temp2=erasers.remove_items(60);
    cout<<"Items remaining: ";
    if(temp1>0)
        cout<<temp1;
    else
        cout<<"Error";
    cout<<endl<<"Items remaining: ";
    if(temp2>0)
        cout<<temp2;
    else
        cout<<"Error";
        return 0;
}
