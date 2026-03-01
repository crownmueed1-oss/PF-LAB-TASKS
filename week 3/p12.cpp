#include<iostream>
using namespace std;
main()
{
int imposter;
int player;
int chance;
cout<<"Enter imposter count: ";
cin>>imposter;
cout<<"Enter player count: ";
cin>>player;
chance= 100*imposter/player;
cout<<"chance of being an imposter: "<<chance<<"%";
}