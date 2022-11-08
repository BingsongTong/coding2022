#include <iostream>
using namespace std;
typedef struct student{
	int isOpen;
}Student;
int main()
{
	int n,k;
	cin>>n>>k;
	Student stu[n];
	for(int i=0;i<n;i++){
		stu[i].isOpen=0;
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<=k;j++){
			if((i+1)%j==0){
				stu[i].isOpen=1-stu[i].isOpen;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(stu[i].isOpen!=0){
			cout<<i+1<<' ';
		}
	}
	return 0;
}
