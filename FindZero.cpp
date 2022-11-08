#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	while(n>0){
		sum+=n/5;
		n/=5;
	}
	cout<<sum;
	return 0;
}
