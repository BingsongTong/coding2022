/*
Write a program that asks the user to enter a latitude in degrees, minutes, and seconds
and that then displays the latitude in decimal format.There are 60 seconds of
arc to a minute and 60 minutes of arc to a degree; represent these values with symbolic
constants.
You should use a separate variable for each input value. The input will be like:
37 51 19
The output should be:
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
Attention: there is a space after the comma symbol.
Please use default float precision.*/

#include<iostream>
using namespace std;
int main()
{
	double m,s,d;
	double d1;
	cin>>d>>m>>s;
	d1=d+m/60.0+s/3600.0;
	cout<<d<<" degrees, "<<m<<" minutes, "<<s<<" seconds = "<<d1<<" degrees";
	return 0;
}
