/*
Input
The first line of the input is an integer n that specifies the number of numbers.
The second line of the input will consist of n numbers.
Output
Their sum
Sample Input
5
33 11 2 9 11
Sample Output
66
*/

#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++){
		cin>>num[i];
		sum+=num[i];
	}
	cout<<sum;
	return 0;
}
