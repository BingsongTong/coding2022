/*
Write a program that requests the user to enter two integers.The program should then calculate and report the sum of all the integers between and including the two integers. At this point, assume that the smaller integer is entered first.
The input will be like:
2 9
The output should be:
44
*/

#include <iostream>
using namespace std;

int main()
{
	int beg,end;
	cin>>beg>>end;
	int num=end-beg+1;
	cout<<(end+beg)*num/2;
	return 0;
}
