#include<iostream>
using namespace std;
main()
{
char letter;
cout<<" enter the character in lower case: ";
cin>>letter;
if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u')
{
cout<<"It is a vowel";
}
else 
if(letter>='0'&& letter<='9')
{
cout<<" IT is a number";
}
else
{
cout<<" IT is a consonant";
}
}