#include<iostream>
using namespace std;
main()
{
int table,multi;
cout<<"enter number for table to print: ";
cin>>table;
for(int i=1;i<=10;i++)
{
multi=table*i;
cout<<table<<"X"<<i<<"= "<< multi<<endl;
}
}