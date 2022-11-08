#include <iostream>
using namespace std;
int main()
{
	char MON[12][15]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	char *ptr[12];
	for(int i=0;i<12;i++){
		ptr[i]=MON[i];
	}
	int n;
	cin>>n;
	cout<<ptr[n-1];
	return 0;
}
