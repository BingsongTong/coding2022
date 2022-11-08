#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool Check(string s);
int main()
{
	string str;
	cin>>str;
	if(Check(str)){
		cout<<"Yes";
	}else {
	cout<<"No";
	}
	return 0;
}
//用stack去解决本题
bool Check(string s)
{
	stack<char> str;
	for(int i=0;i<s.size();i++){
		if(s[i]=='['||s[i]=='('){
			str.push(s[i]);
		}
//匹配机制如下：如果栈中有左括号，那么下一个元素必须是右括号，否则返回false
		if((s[i]==']'&&str.top()!='[')||(s[i]==')'&&str.top()!='(')){
			return false;
		}
		if((s[i]==']'&&str.top()=='[')||(s[i]==')'&&str.top()=='(')){
			str.pop();
	}
}
//别忘了检查是否为空
	if(!str.empty()){
		return false;
	}
	return true;
}
