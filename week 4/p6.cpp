#include<iostream>
using namespace std;
main()
{
int amount,discount;
cout<<"enter your bill: ";
cin>>amount;
if(amount<=5000){
discount=amount*0.05;
amount=amount-discount;
cout<<"your discount bill is: "<< amount;
}
else
if(amount>5000){
discount=amount*0.1;
amount=amount-discount;
cout<<"your discount bill is : "<< amount;
}
}