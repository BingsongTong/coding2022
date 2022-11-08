/*假定程序中已经有三个学生信息了，现在需要删除一个已有学生信息。
要求： 1）必须用数组来存储学生信息，包括学号，班级，姓名，三门课程的成绩；
2）学生在数组中必须是排序的（班级从小到大，同一班级内总成绩从大到小）；
3）删除某一个学生信息，数组必须依然保持有序。
注：程序只需要输入一个待删除学生的学号或者姓名，如果该学生不存在，则输出原有三个学生信息退出程序即可。
如果该学生存在，则输出剩余学生的信息，格式如下（中间用空格隔开，每个学生一行）
学号1 班级1 姓名1 成绩1 成绩2 成绩3
学号2 班级2 姓名2 成绩1 成绩2 成绩3
紧跟着输出：Are you sure(yes/no)? 当用户输入n时，再次输出所有三个学生的信息（排序的）,然后程序结束；当用户输入y时，程序直接结束*/
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
struct Score{
	double s1;
	double s2;
	double s3;
};
struct Student{
	string ID;
	int Class;
	Score score;
	string name;
	double sum;
	bool IsDeleted=0;
};
int main()
{
Student stu[3];
//初始化
stu[0].ID="10001",stu[0].Class=11,stu[0].score.s1=99.5,stu[0].score.s2=88.5,stu[0].score.s3=89.5;
stu[1].ID="10002",stu[1].Class=12,stu[1].score.s1=77.9,stu[1].score.s2=56.5,stu[1].score.s3=87.5;
stu[2].ID="10003",stu[2].Class=11,stu[2].score.s1=92.5,stu[2].score.s2=99.0,stu[2].score.s3=60.5;
stu[0].name="Zhang";
stu[1].name="Yang";
stu[2].name="Liang";
for(int i=0;i<3;i++){
	stu[i].sum=stu[i].score.s1+stu[i].score.s2+stu[i].score.s3;
}
for(int i=0;i<3;i++){
	for(int j=0;j<2-i;j++){
		if(stu[j].Class!=stu[j+1].Class){
			if(stu[j].Class>stu[j+1].Class){
				Student temp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=temp;
			}
		}else if(stu[j].sum<stu[j+1].sum){
				Student temp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=temp;
		}
	}
}
//删除
string De;
cin>>De;
int sign=0,lo=0;
for(int i=0;i<3;i++){
	if(De==stu[i].ID||De==stu[i].name){
		stu[i].IsDeleted=1;
		lo=i;
		sign=1;
		break;
		}
}		
if(sign==0){
	for(int i=0;i<3;i++){
	if(stu[i].IsDeleted==0){
		printf("%s %d %s %.1lf %.1lf %.1lf",stu[i].ID.c_str(),stu[i].Class,stu[i].name.c_str(),stu[i].score.s1,stu[i].score.s2,stu[i].score.s3);
		}
		if(i!=2&&stu[i].IsDeleted==0){
			cout<<endl;
		}

	}
}else{
	for(int i=0;i<3;i++){
		if(stu[i].IsDeleted==0){
		printf("%s %d %s %.1lf %.1lf %.1lf",stu[i].ID.c_str(),stu[i].Class,stu[i].name.c_str(),stu[i].score.s1,stu[i].score.s2,stu[i].score.s3);
		}
		if(i!=2&&stu[i].IsDeleted==0){
			cout<<endl;
		}
	}
	cout<<endl<<"Are you sure(yes/no)?";
	char a;
	cin>>a;
	if(a=='n'){
		stu[lo].IsDeleted=0;
	for(int i=0;i<3;i++){
		if(stu[i].IsDeleted==0){
			if(i!=2){
		printf("%s %d %s %.1lf %.1lf %.1lf\n",stu[i].ID.c_str(),stu[i].Class,stu[i].name.c_str(),stu[i].score.s1,stu[i].score.s2,stu[i].score.s3);
		}else{
	printf("%s %d %s %.1lf %.1lf %.1lf",stu[i].ID.c_str(),stu[i].Class,stu[i].name.c_str(),stu[i].score.s1,stu[i].score.s2,stu[i].score.s3);
		}
		}
		}
	}else if(a=='y'){
		return 0;
	}
}
}
