#include <iostream>
using namespace std;
void Reverse(int n);
int main()
{
	int n;
	cin>>n;
	while(n!=0&&n%10==0){
		n/=10;
	}
	Reverse(n);
	return 0;
}
void Reverse(int n)
{
	if(n>=0&&n<=9){
		cout<<n;
	}else{
		cout<<n%10;
		return Reverse(n/10);
	}
}
