#include<iostream>
using namespace std;
main()
{
char going;
cout<<" are your friend going? (Press y for yes and N for no: )";
cin >>going;
if(going == 'y'){
cout<<"you are also going!";
}
if(going=='N')
{
cout<<"you are not going!";
}
}