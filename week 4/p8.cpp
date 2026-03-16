#include<iostream>
using namespace std;
main()
{
int num1,num2,result;
char op;
cout<<"enter first number: ";
cin>>num1;
cout<<"enter the operator: ";
cin>>op;
cout<<"enter second number : ";
cin>>num2;
if(op== '+')
{
result=num1+num2;
cout<<num1<<"+"<<num2<<"="<<result;
}
else
if(op== '-')
{
result=num1-num2;
cout<<num1<<"-"<<num2<<"="<<result;
}
else
if(op == '*')
{
result=num1*num2;
cout<<num1<<"*"<<num2<<"="<<result;
}
else
if(op == '/')
{
result=num1/num2;
cout<<num1<<"/"<<num2<<"="<<result;
}
}