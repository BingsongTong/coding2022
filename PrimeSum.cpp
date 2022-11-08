/*描述
现在给你N个数（0 <= N < 1000），现在要求你写出一个程序，找出这N个数中的所有素数，并求和。
输入
第一行：N
第二行：N个数为要测试的数据，每个数小于1000
输出
输出给出的测试数据的所有素数和
*/
#include <iostream>
using namespace std;
bool isPrime(int n);
int main()
{
	int n;
	cin>>n;
	int test[n];
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>test[i];
	}
	for(int i=0;i<n;i++){
		if(isPrime(test[i])){
			sum+=test[i];
		}
	}
	cout<<sum;
	return 0;
}
bool isPrime(int n)
{
	if((n>2&&n%2==0)||(n==1)){
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
