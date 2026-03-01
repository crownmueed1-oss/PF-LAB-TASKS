#include<iostream>
using namespace std;
main()
{
int age,move,average;
cout<<"Enter the person's age: ";
cin>>age;
cout<<"Enter the number of times they'ev moved:";
cin>>move;
average=age/(move+1);
cout<<"Average number of years lived in the same house: "<<average;
}
