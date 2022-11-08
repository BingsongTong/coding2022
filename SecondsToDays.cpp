/*Write a program that asks the user to enter the number of seconds as an integer
value (use type long, or, if available, long long) and that then displays the equivalent
time in days, hours, minutes, and seconds. Use symbolic constants to represent
the number of hours in the day, the number of minutes in an hour, and the number
of seconds in a minute.
Sample input:
31600000
Sample output:
31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds*/
#include <iostream>
using namespace std;
int* Time(long long int num);
int main()
{
	long long int n;
	int *time;
	cin>>n;
	time=Time(n);
	cout<<n<<" seconds = "<<time[0]<<" days, "<<time[1]<<" hours, "<<time[2]<<" minutes, "<<time[3]<<" seconds";
	return 0;
}
int* Time(long long int num)
{
	int *p=new int [4];
	int t=num/60;
	p[3]=num%60;
	p[2]=t%60;
	t/=60;
	p[1]=t%60;
	p[0]=t/24;
	return p;
}
