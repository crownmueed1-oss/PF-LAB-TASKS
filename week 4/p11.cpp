#include<iostream>
using namespace std;
main()
{
string country;
int price, discount,finalprice;
cout<<"enter country name: ";
cin>>country;
cout<<" enter the price in dollars: ";
cin>>price;
if(country=="Ireland")
{
discount=price*0.10;
finalprice=price-discount;
}
else
{
discount=price*0.05;
finalprice=price-discount;
}
cout<<"discount price:"<< finalprice;
}