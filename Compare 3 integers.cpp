/*
Description: compare and output them in ascending order.
Sample input:
3 5 2
Sample output:
2 3 5
*/

#include <functional>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int num[3];
	for(int i=0;i<3;i++){
		cin>>num[i];
	}
	//sort(num,num+3,greater<int>());
	sort(num,num+3);
	for(int i=0;i<3;i++){
		if(i)cout<<' '<<num[i];
		else cout<<num[i];
	}
	return 0;
}
