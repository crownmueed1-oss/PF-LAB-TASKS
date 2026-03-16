#include<iostream>
using namespace std;
main()
{
int holidays,workingdays,playtime,difference,hours,minutes;
int norm=30000;
cout<<"enter the holidays:";
cin>>holidays;
workingdays=365-holidays;
playtime=workingdays*63+holidays*127;
difference=norm-playtime;
hours=difference/60;
minutes=difference%60;
if(playtime<=norm)
{
cout<<"tom sleeps well\n";
cout<<hours<<"hours and "<<minutes<<"minutes less for play";
}
else
{
cout<<"tom will run away\n";
cout<<hours<<"minutes more for play";
}
}