#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[100];
	cin.getline(str,100);
	char *p=str;
	int space=0,capital=0,low=0,number=0;
	for(int i=0;i<strlen(str);i++,p++){
		if(*p==' '){
			space++;
		}else if (*p<='9'&&*p>='0') {
			number++;
		}else if (*p>='a'&&*p<='z') {
			low++;
		}else if (*p>='A'&&*p<='Z') {
			capital++;
		}
	}
	cout<<"space: "<<space<<endl<<"capital: "<<capital<<endl<<"lowercase: "<<low<<endl<<"number: "<<number;
	return 0;
}
