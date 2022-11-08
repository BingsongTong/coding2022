#include <iostream>
using namespace std;
void Zuhe(int n,int r,int m);
int main()
{
	int n,r;
	cin>>n>>r;
	Zuhe(n, r,0);
	return 0;
}
//采用递归的方法
//m这样理解：表示当前已经确定了m个数
//我们只用接着去取出r-m个数就行了
//
void Zuhe(int n,int r,int m){
	static int a[100];//存放我们要的结果数组，我们的结果已经选定m位了
	if(n<r){
		return;
	}
	if(r==0){//BaseCase:不用在选了，输出我们选过的就行了
		for(int i=0;i<m;i++){
			cout<<a[i];
		}
		cout<<endl;
	}else{
//为了保证字典序，我们从n向1去取
//分两种情况：取n，不去取n
		a[m]=n;//Case1:select n
		Zuhe(n-1, r-1, m+1);//we have already select m+1 numbers
	//Case2:not select n
		Zuhe(n-1, r, m);
	}
}
