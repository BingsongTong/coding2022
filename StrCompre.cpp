/*比较两个字符串dst和src，遇到第一个不一样的字符，返回第一次出现不一样字符的位置；如果dst和src完全相同，则返回0。
第一个输入的为dst，第二个为src
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string dst,src;
	getline(cin,dst,'\n');
	getline(cin,src,'\n');
	for(int i=0;i<dst.length();i++){
		if(dst[i]!=src[i]){
			cout<<i+1;
			return 0;
		}
	}
	if(dst.length()!=src.length()){
		cout<<dst.length()+1;
	}else {
		cout<<0;
	}
	return 0;
}
