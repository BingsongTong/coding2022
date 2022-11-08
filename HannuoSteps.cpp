#include <iostream>
using namespace std;
int step(int n);
int main()
{
	int n;
	cin>>n;
	cout<<step(n);
	return 0;
}
int step(int n)
{
	if(n==0){
		return 0;
	}else if(n==1){
	return 1;
	}else {
	return (2*step(n-1)+1)%1000000;
	}
}
