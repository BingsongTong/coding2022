#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str[100];
	int sign=0;
	for(int i=0;i<100;i++){
		cin>>str[i];
		if(str[i]=="done"){
			sign=i;
			break;
		}
	}
	cout<<"You entered a total of "<<sign<<" words.";
	return 0;
}
