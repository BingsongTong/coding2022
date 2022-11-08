#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	map<string,int> Count;
	map<string,int>::iterator pos;
	int n;
	cin>>n;
	string str;
	for(int i=0;i<n;i++){
		cin>>str;
		if(Count.find(str)==Count.end()){
			Count.insert(pair<string,int>(str,1));
		}else{
			pos=Count.find(str);
			(*pos).second++;
		}
	}
	int max=0;
	string an;
	for(pos=Count.begin();pos!=Count.end();pos++){
		if((*pos).second>max){
			max=(*pos).second;
			an=(*pos).first;
		}
	}
	cout<<an<<' '<<max;
	return 0;
}
