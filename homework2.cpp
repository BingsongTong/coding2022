/*在第一次作业建立的环境下，编写程序，输入四个整型数，排序后按从小到大的顺序输出。
 * 用cat命令显示程序，然后运行a.out看结果，最后截图（包括cat和运行a.out）上传。
注：不建议使用sort类调用来完成此次作业，要求的是排序算法自己写；也不建议使用数组等还没有学习过的内容
*/
#include <iostream>
using namespace std;
int main()
{
	int num[4];
	for(int i=0;i<4;i++){
		cin>>num[i];
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3-i;j++){
			if(num[j]>num[j+1]){
				int t=num[j];
				num[j]=num[j+1];
				num[j+1]=t;
			}
		}
	}
	for(int i=0;i<4;i++){
		cout<<num[i]<<endl;
	}
	return 0;
}
