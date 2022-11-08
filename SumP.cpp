#include <iostream>
#include <math.h>
using namespace std;
int Sum(int n,int p);
int main()
{
	int n,p;
	cin>>n>>p;
	int sum=Sum(n,p);
	cout<<sum;
	return 0;
}
int Sum(int n,int p)
{
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=(int)(pow(i,p));
	}
	return sum;
}
