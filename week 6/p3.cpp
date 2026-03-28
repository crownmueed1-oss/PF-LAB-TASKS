#include<iostream>
using namespace std;
main()
{
int element;
cout<<"Enter the number of elements : ";
cin >> element;
cout<<"Enter "<<element<<" numbers: "<<endl;
int a[element];
for(int i=0;i<element;i++)
{
cin >> a[i];
}
int largest=a[0];
int smallest;
for(int i=1;i<element;i++)
{
if(a[i]>largest)
{
largest=a[i];
}
else
{
smallest=a[i];
}
}
cout<<"Largest number is "<<largest<<endl;
cout<<"Smallest number is "<<smallest<<endl;
}