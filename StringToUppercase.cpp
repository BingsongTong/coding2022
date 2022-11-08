#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;
void toUpper(string &str);
int main()
{
	string str;
	getline(cin,str,'\n');
	toUpper(str);
	cout<<str;
	return 0;
}
void toUpper(string &str)
{
	for(int i=0;i<str.length();i++){
		if(str[i]>='a'&&str[i]<='z'){
			str[i]=str[i]+'A'-'a';
		}
	}
}
