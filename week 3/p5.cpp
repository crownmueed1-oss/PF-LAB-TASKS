#include<iostream>
using namespace std;
main()
{
int charge;
int time;
float current;
cout<<"enter the charge in coulombs: ";
cin>>charge;
cout<<"enter the time in seconds: ";
cin>>time;
current= charge/time;
cout<<"the current is : "<<current;
}