#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

 class hospital
 {
 private:
    struct date
 {
     int day;
     int month;
     int year;
 }adate,ddate;
 public:
     char name[100];
     char disease[100];
     void details()
     {
         cout<<"Enter the patient's name"<<endl;
         cin.getline(name,100);
         cout<<"Enter the disease"<<endl;
         cin.getline(disease,100);
         cout<<"Enter the date of admission"<<endl;
         cin>>adate.day>>adate.month>>adate.year;
         cout<<"Enter the date of discharge"<<endl;
         cin>>ddate.day>>ddate.month>>ddate.year;
     }
     void display()
     {
         cout<<"The patient's name is: "<<name<<endl;
         cout<<"The disease is: "<<disease<<endl;
         cout<<"The date of admission is: "<<adate.day<<" "<<adate.month<<" "<<adate.year<<endl;
         cout<<"The date of discharge is: "<<ddate.day<<" "<<ddate.month<<" "<<ddate.year<<endl;
    }
 };

 int main()
 {
 hospital a,b;
 a.details();
 a.display();

 return 0;
 }
