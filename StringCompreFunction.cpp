#include <iostream>
#include <cstring>
using namespace std;
int cmp(char a[],char b[]);
int main()
{
	char a[100],b[100],c[100];
	cin.getline(a,100);
	cin.getline(b,100);
	cin.getline(c,100);
	if(cmp(a,b)>=0){
		if(cmp(a,c)>0){
			cout<<a;
		}else {
		cout<<c;
		}
	}else {
	if(cmp(b,c)>0){
		cout<<b;
	}else {
	cout<<c;
	}
	}
	return 0;
}
int cmp(char a[],char b[])
{
	int la=strlen(a),lb=strlen(b);
	for(int i=0;i<strlen(a)||i<strlen(b);i++){
		if(a[i]!=b[i]){
				return (int)(a[i]-b[i]);
			}
		}
	return 0;
}
