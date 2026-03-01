#include<iostream>
using namespace std;
main()
{
int initialvelocity;
int acceleration;
int time;
int finalvelocity;
cout<<" Enter initial velocity: ";
cin>>initialvelocity;
cout<<"enter acceleration:";
cin>>acceleration;
cout<<"Enter time:";
cin>>time;
finalvelocity= acceleration*time+initialvelocity;
cout<<" Final velocity: "<<finalvelocity;
}