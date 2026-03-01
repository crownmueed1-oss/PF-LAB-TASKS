#include<iostream>
using namespace std;
main()
{
string name;
float weight;
float days;
cout<<"Enter the name of the person:";
cin>>name;
cout<<"Enter the target weight loss in kilogram:";
cin>>weight;
days= weight*15;
cout<<name<<" will need "<<days<<" days to loss "<<weight<<" kg of weight by following the doctor's suggestions";
}