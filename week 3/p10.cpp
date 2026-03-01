#include<iostream>
using namespace std;
main()
{
int length;
int frames;
int totalframes;
cout<<"Number of Minutes: ";
cin>>length;
cout<<" Frames per second: ";
cin>>frames;
totalframes= length*frames*60;
cout<<" total number of frames : "<<totalframes;
}