#include<iostream>
using namespace std;
main()
{
int element;
cout<<"enter the number of element: ";
cin>>element;
cout<<"enter "<<element<<" numbers "<<endl;
int p[element];
int sum=0;
for(int i=0;i<element;i++)
{
cin>>p[i];
sum=sum+p[i];
}
cout<<"sum of all elements : "<<sum;
}