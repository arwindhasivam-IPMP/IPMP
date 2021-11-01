#include<iostream>
#include<conio.h>
using namespace std;

void linear_search(int a[],int x,int n)
{
    int z=0;
    for(int i=0;i<n+1;i++)
    {
        if(x==a[i]&&i<n)
        {
            cout<<"The element is at "<<i+1<<"th position";
            z++;
            break;
        }}

if(z==0)
{
    cout<<"The element entered cannot be found in the array";
}


}

int main()
{
  int arr[100],n,x;
  cout<<"enter the number of elements in array\n";
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cout<<"Enter the "<<i+1<<"th element";
      cin>>arr[i];
  }
  cout<<"Enter the element to be found\n";
  cin>>x;
  linear_search(arr,x,n);
  return 0;

}
