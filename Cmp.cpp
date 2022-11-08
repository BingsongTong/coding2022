#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(double m,double n);
int main()
{
	double num[10];
	for(int i=0;i<10;i++){
		cin>>num[i];
	}
	sort(num,num+10,cmp);
	for(int i=0;i<9;i++){
		cout<<num[i]<<' ';
	}
	cout<<num[9];
	return 0;
}
bool cmp(double m,double n)
{
	if(m<n){
		return false;
	}else {
	return true;
	}
}
