#include<iostream>
using namespace std;
main()
{
int speed;
cout<<"enter speed:";
cin>>speed;
if(speed<=10)
{
cout<<"slow";
}
if(speed>10)
{
if(speed<=50)
cout<<"average";
}
if(speed>50)
{
if(speed<150)
cout<<"fast";
}
if(speed>150)
{
if(speed<1000)
cout<<"ultra fast";
}
if(speed>1000)
{
cout<<"extremely fast";
}
}