#include<iostream>
using namespace std;
main()
{
int numberofsquare,width,height,walls;
cout<<"Number of square meters you can paint: ";
cin>>numberofsquare;
cout<<"Width of the single wall(in meters): ";
cin>>width;
cout<<"Height of the single wall(in meters): ";
cin>>height;
walls=numberofsquare/(width*height);
cout<<"Number of walls you can paint: "<<walls;
}
