/*现在给出你一些数，要求你写出一个程序，输出这些整数相邻最近的素数，并输出其相距长度。如果左右有等距离长度素数，则输出左侧的值及相应距离。如果输入的整数本身就是素数，则输出该素数本身，距离输出0*/
#include <iostream>
using namespace std;
bool isPrime(int n);
int main()
{
	int n;
	cin>>n;
	if(isPrime(n)){
		cout<<n<<' '<<0;
	}else {
		int t=n,s=n;
		while (isPrime(t)==0&&isPrime(s)==0) {
			t-=1;
			s+=1;
		}
		if(isPrime(t)){
			cout<<t<<' '<<n-t;
		}else cout<<s<<' '<<s-n;
	}
	return 0;
}
bool isPrime(int n)
{
	if((n>2&&n%2==0)||(n==1)||(n<=0)){
		return false;
	}else if(n==2){
		return true;
	}else{
		for(int i=3;i*i<=n;i+=2){
			if(n%i==0){
				return false;
			}
		}
		return true;
	}
}
