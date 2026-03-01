#include<iostream>
using namespace std;
main()
{
cout<<"enter the size in megabytes: ";
float MB;
cin>>MB;
float mb1=1024;
float kb1=1024;
float bytes1=8;
float bit;
bit= MB*mb1*kb1*bytes1;
cout<<MB<<" MB is equivalent to "<<bit<<" bits";
}
