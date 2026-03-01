#include<iostream>
using namespace std;
main()
{
string name;
float obtainmatric;
float percentmatric;
float obtaininter;
float percentinter;
float obtainecat;
float percentecat;
float aggregate;
cout<<" enter the student's name: ";
cin>>name;
cout<<"enter marticulation marks(out of 1100):";
cin>>obtainmatric;
percentmatric=( obtainmatric/1100)*10;
cout<<"enter intermediate marks(out of 1200):";
cin>>obtaininter;
percentinter= (obtaininter/1200)*40;
cout<<"enter E-CAT marks(out of 400):";
cin>>obtainecat;
percentecat= (obtainecat/400)*50;
aggregate= percentmatric+percentinter+percentecat;
cout<<"aggregate score for " <<name<<" is:"<<aggregate<<"%";
}
