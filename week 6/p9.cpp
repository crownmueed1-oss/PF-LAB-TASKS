#include<iostream>
using namespace std;
main()
{
int sum=0;
float average=0;
int num[5]={1,2,3,4,5};
for(int i=0; i<5; i++)
{
sum+=num[i];
}
average=sum/5;
cout<<"The sum of first five natural number is "<<sum<<endl;
cout<<"The average of first five natural number is "<<average<<endl;
}