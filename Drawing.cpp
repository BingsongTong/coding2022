#include <iostream>
using namespace std;
void Draw(int n);
int main()
{
	int n;
	cin>>n;
	Draw(n);
	return 0;
}
void Draw(int n)
{
	for(int i=n-1;i>=0;i--){
		for(int j=n-1;j>=0;j--){
			if(i<j){
				cout<<'.'<<endl;
				continue;
			}else{ cout<<'*'<<endl;
				continue;}
		}
	}
}
