#include <iostream>
using namespace std;
long long Fac(int n);
int main()
{
	int n;
	cin>>n;
	cout<<Fac(n);
	return 0;
}
long long Fac(int n)
{
	if(n==0){
		return 1;
	}else return n*Fac(n-1);
}
