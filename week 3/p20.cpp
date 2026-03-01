#include<iostream>
using namespace std;
main()
{
float size,cost;
float area;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>size;
cout<<"Enter the cost of the bag: $";
cin>>cost;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>area;
float costperpound;
costperpound=cost/size;
float costpersquarefoot;
costpersquarefoot=cost/area;
cout<<"Cost of fertilizing per pound: $"<<costperpound;
cout<<"\nCost of fertilizing per square foot: $"<<costpersquarefoot;
}