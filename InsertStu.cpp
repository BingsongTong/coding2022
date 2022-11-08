/*假定程序中已经有三个学生信息了，现在需要插入一个新的学生信息。
1）必须用数组来存储学生信息，包括学号，班级，三门课程的成绩；
2）学生在数组中必须是排序的（班级从小到大，同一班级内总成绩从大到小）；
3）新输入的学生插入后，数组必须依然保持有序。输出也必须按序
注：程序只需要输入一个新学生的信息即可，注意新输入的学生的学号不能与已有的学生的学号相同，若相同则默认新插入学生学号为10000。已有的三个学生的信息可以在数组初始化时静态赋值，也可以用语句来进行动态赋值。要求这三个学生的信息必须是：
10001 11 99.5 88.5 89.5
10002 12 77.9 56.5 87.5
10003 11 92.5 99.0 60.5
输入：新学生的信息，格式如下（空格隔开）：
学号1 班级1 成绩1 成绩2 成绩3
输出：所有学生信息，格式如下（空格隔开，每个学生一行）
学号1 班级1 成绩1 成绩2 成绩3
学号2 班级2 成绩1 成绩2 成绩3
学号3 班级3 成绩1 成绩2 成绩3
学号4 班级4 成绩1 成绩2 成绩3
其中，新插入的学生的成绩3之后，空一格，然后输出inserted标志，表示其为新插入的学生
如1004 11 23.4 45.6 99.0 inserted*/
#include <cstdio>
#include <iostream>
using namespace std;
struct Score{
	double s1;
	double s2;
	double s3;
};
struct Student{
	int ID;
	int Class;
	Score score;
	double sum;
	bool IsInserted=0;
};
int main()
{
Student stu[4];
stu[0].ID=10001,stu[0].Class=11,stu[0].score.s1=99.5,stu[0].score.s2=88.5,stu[0].score.s3=89.5;
stu[1].ID=10002,stu[1].Class=12,stu[1].score.s1=77.9,stu[1].score.s2=56.5,stu[1].score.s3=87.5;
stu[2].ID=10003,stu[2].Class=11,stu[2].score.s1=92.5,stu[2].score.s2=99.0,stu[2].score.s3=60.5;
cin>>stu[3].ID>>stu[3].Class>>stu[3].score.s1>>stu[3].score.s2>>stu[3].score.s3;
for(int i=0;i<3;i++){
	if(stu[i].ID==stu[3].ID){
		stu[3].ID=10000;
		break;
	}
}
stu[3].IsInserted=1;
for(int i=0;i<4;i++){
	stu[i].sum=stu[i].score.s1+stu[i].score.s2+stu[i].score.s3;
}
for(int i=0;i<4;i++){
	for(int j=0;j<3-i;j++){
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
for(int i=0;i<4;i++){
	printf("%d %d %.1lf %.1lf %.1lf",stu[i].ID,stu[i].Class,stu[i].score.s1,stu[i].score.s2,stu[i].score.s3);
	if(stu[i].IsInserted==1){
		cout<<" inserted";
	}
	if(i!=3){
		cout<<endl;
	}
}
	return 0;
}
