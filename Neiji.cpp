/*输入向量包含的元素个数n输入第一个向量的元素；输入第二个向量的元素
输出向量的内积
例如
输入
2
1 2
3 4
输出
11*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	double sum=0;
	cin>>n;
	double v[1][n];
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
			cin>>v[i][j];
		}
	}
	for(int i=0;i<n;i++){
		sum+=v[0][i]*v[1][i];
	}	
	cout<<sum;
	return 0;
}
