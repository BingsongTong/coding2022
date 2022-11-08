#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	char ch;
	getline(cin,str,'\n');
	cin>>ch;
	for(int i=0;i<str.length();i++){
		if(str[i]==ch){
			cout<<i+1;
			return 0;
		}
	}
	cout<<0;
	return 0;
}
