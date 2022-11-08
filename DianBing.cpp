#include <iostream>
using namespace std;
int ModNi(int n,int p);
int DianBing(int a,int b,int c);
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int result=DianBing(a,b,c);
	cout<<result;
	return 0;
}
int ModNi(int n,int p){
	for(int i=1;i<p;i++){
		if((i*n)%p==1){
			return i;
			break;
		}
	}
	return -1;
}
int DianBing(int a,int b,int c)
{
	int M=3*5*7;
	int M1=M/3,M2=M/5,M3=M/7;
	int t1=ModNi(M1,3);
	int t2=ModNi(M2,5);
	int t3=ModNi(M3,7);
	return (a*M1*t1+b*M2*t2+c*M3*t3)%M;
}
