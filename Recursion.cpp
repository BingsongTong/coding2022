#include <iostream>
using namespace std;
long Fun(int f1,int f2,int a,int b,int c,int n);
int main()
{
	int f1,f2,a,b,c,n;
	cin>>f1>>f2>>a>>b>>c>>n;
	long result=Fun(f1, f2,a, b,  c, n);
	if(result<=0){
		result+=1000007;
	}
	cout<<result;
	return 0;
}
long Fun(int f1,int f2,int a,int b,int c,int n)
{
	if(n==1){
		return f1;
	}else if (n==2) {
		return f2;
	}else return (a*Fun(f1, f2, a, b, c,n-2)+b*Fun(f1, f2, a, b, c, n-1)+c)%1000007;
}
