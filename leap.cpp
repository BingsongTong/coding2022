/*Input a particular year. If it is a leap year, output "Y", else output "N".
Sample input: 2016
Sample output: Y
Sample input: 2015
Sample output: N
*/

#include <iostream>
using namespace std;

bool isLeap(int year){
	if(year%4!=0){
		return false;
	}else if (year%100==0&&year%400!=0){
		return false;
	}else return true;
}

int main()
{
	int year;
	cin>>year;
	if(isLeap(year)){
		cout<<'Y';
	}else cout<<'N';
	return 0;
}
