#include<iostream>
using namespace std;
main()
{
int element;
cout<<"enter the number of element: ";
cin>>element;
cout<<"enter "<<element<<"numbers: "<<endl;
int p[element];
int count=0;
for(int i=0;i<element;i++)
{
cin>>p[i];
if(p[i]%2==0)
{
count=count+1;
}
}
cout<<"total even numbers "<<count;
}