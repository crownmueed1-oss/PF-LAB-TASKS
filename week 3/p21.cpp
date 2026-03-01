#include<iostream>
using namespace std;
main()
{
string movie;
int adult,child,adultticket,childticket,charity;
cout<<"enter the movie name:";
cin>>movie;
cout<<"enter the adult ticket price: $";
cin>>adult;
cout<<"enter the child ticket price:$";
cin>>child;
cout<<"enter the number of adult ticket sold:";
cin>>adultticket;
cout<<"enter the number of child tickets sold:";
cin>>childticket;
cout<<"enter the percentage of amount to be donated to charity:";
cin>>charity;
cout<<"-------------------------------------------------";
cout<<"\nMovie:"<<movie;
int totalamount;
totalamount=(adult*adultticket)+(child*childticket);
cout<<"\nTotal amount generated from ticket sales: $"<<totalamount;
int donation;
donation=(totalamount*charity)/100;
cout<<"\nDonation to charity("<<charity<<"): $"<<donation;
int afterdonation;
afterdonation=totalamount-donation;
cout<<"\nRemaining amount after donation:$"<<afterdonation;
}