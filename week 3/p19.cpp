#include<iostream>
using namespace std;
main()
{
float price1,price2;
int totalkg1,totalkg2;
cout<<"Enter vegetable price per kilogram(in coins): ";
cin>>price1;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>price2;
cout<<"Enter total kilogram of vegetables: ";
cin>>totalkg1;
cout<<"Enter total kilogram of fruits: ";
cin>>totalkg2;
float totalearningofvegetable;
totalearningofvegetable=price1*totalkg1;
float totalearningoffruits;
totalearningoffruits=price2*totalkg2;
float totalearning;
totalearning=(totalearningofvegetable+totalearningoffruits)/1.94;
cout<<"Total earnings in rupees(Rps): "<<totalearning;
}