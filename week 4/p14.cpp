#include<iostream>
using namespace std;
main()
{
float redrose,whiterose,tulips,price,discount,afterdiscount;
cout<<"enter red roses: ";
cin>>redrose;
cout<<"enter white roses: ";
cin>>whiterose;
cout<<"enter tulips";
cin>>tulips;
price=(redrose*2)+(whiterose*4.1)+(tulips*2.5);
cout<<"total price:"<<price;
if(price>200)
{
discount=price*0.20;
afterdiscount=price-discount;
cout<<"\nprice after discount: "<<afterdiscount;
}
}