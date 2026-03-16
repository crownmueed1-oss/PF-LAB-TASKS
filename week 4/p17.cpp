#include <iostream>
using namespace std;
main()
{
string figure;
float area;
cin>>figure;
int s,b,l,w,r;
if(figure=="square")
{
cin>>s;
area=s*s;
cout<<"area of circle "<<area;
}
if(figure=="rectangle")
{
cin>>l;
cin>>w;
area=l*w;
cout<<"area of rectangle"<<area;
}
if(figure=="triangle")
{
cin>>b;
area=1/2*l*b;
cout<<"area of triangle"<<area;
}
if(figure=="circle")
{
cin>>r;
area=3.14*r*r;
cout<<"area of circle "<<area;
}
}