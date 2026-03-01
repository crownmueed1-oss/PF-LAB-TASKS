#include<iostream>
using namespace std;
main()
{
int population,birthrate,threedecades;
cout<<"Enter the current world population: ";
cin>>population;
cout<<"Enter the monthly birth rate (number of births per month): ";
cin>>birthrate;
threedecades= population+(birthrate*360);
cout<<"Population in three decades will be: "<<threedecades;
}