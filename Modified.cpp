/*
10001 11 Zhang 99.5 88.5 89.5
10002 12 Yang 77.9 56.5 87.5
10003 11 Liang 92.5 99.0 60.5
输入(中间用空格隔开)：学号1 班级1 姓名1 成绩1 成绩2 成绩3
输出：更新后的学生的信息，格式如下（中间用空格隔开，每个学生一行）
班级1 学号1 姓名1 成绩1 成绩2 成绩3
班级2 学号2 姓名2 成绩1 成绩2 成绩3
班级3 学号3 姓名3 成绩1 成绩2 成绩3
输出时，当多个学生属于同一个班级时，第一个学生输出班级，其他学生前面缩进三个空格，不输出班级；同时，在最新修改的学生信息最后面，加入一个空格，再输出modified
班级n 学号n 成绩1 成绩2 成绩3 modified*/
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
	bool IsModefied=0;
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
Student ss;
cin>>ss.ID>>ss.Class>>ss.name>>ss.score.s1>>ss.score.s2>>ss.score.s3;
ss.sum=ss.score.s1+ss.score.s2+ss.score.s3;
for(int i=0;i<3;i++){
	if(stu[i].ID==ss.ID){
		stu[i]=ss;
		stu[i].IsModefied=1;
	}
}
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
printf("%d %s %s %.1lf %.1lf %.1lf",stu[0].Class,stu[0].ID.c_str(),stu[0].name.c_str(),stu[0].score.s1,stu[0].score.s2,stu[0].score.s3);
if(stu[0].IsModefied==1){
	cout<<' '<<"modified";
}
for(int i=1;i<3;i++){
	if(stu[i].Class==stu[i-1].Class){
	printf("\n   %s %s %.1lf %.1lf %.1lf",stu[i].ID.c_str(),stu[i].name.c_str(),stu[i].score.s1,stu[i].score.s2,stu[i].score.s3);
	}else {
	printf("\n%d %s %s %.1lf %.1lf %.1lf",stu[i].Class,stu[i].ID.c_str(),stu[i].name.c_str(),stu[i].score.s1,stu[i].score.s2,stu[i].score.s3);
	}
	if(stu[i].IsModefied!=0){
		cout<<' '<<"modified";
	}
}
}
