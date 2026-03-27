#include<iostream>
using namespace std;
main()
{
int n1=0;
int n2=1;
int next;
int n;
cout<<"how many numbers of fibonacci series you want to print: ";
cin>>n;
cout<<n1<<",";
cout<<n2;
for(int i=1; i<n-1;i++)
{
next= n1+n2;
cout<<","<<next;
n1=n2;
n2=next;
}
}