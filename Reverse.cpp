#include <iostream>
using namespace std;
int main()
{
	int num[8];
	for(int i=0;i<8;i++){
		cin>>num[i];
	}
	for(int i=7;i>=0;i--){
		if(i){
			cout<<num[i]<<' ';
		}else {
		cout<<num[i];
		}
	}
	return 0;
}
