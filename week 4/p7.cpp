#include<iostream>
using namespace std;
main()
{
int salary;
int price=50000;
int advance;
cout<<"salary per month: ";
cin>>salary;
advance=(salary*0.5)*6;
cout<<"advance salary for 6 months is : "<< advance<<"\n";
if(advance>=price)
{
cout<<"Ali can buy laptop";
}
else
{
cout<<"months required to buy laptop : "<<price/(salary*0.5);
}
}