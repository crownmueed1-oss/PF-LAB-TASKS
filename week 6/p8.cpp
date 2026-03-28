#include<iostream>
using namespace std;
main()
{
int element=5;
cout<<"Enter the names of "<<element<<" students: "<<endl;
string a[element];
for(int i=0;i<element;i++)
{
getline(cin,a[i]);
}
cout<<endl<<"Student names are: "<<endl;
for(int i=0;i<element;i++)
{
cout<<a[i]<<endl;
}
}