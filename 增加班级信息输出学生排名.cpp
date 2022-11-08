/*具体要求是：输入三个学生信息（注意：班级为两位整数,且起始不能为0，比如11，12就是合法的班级）,依次为：
学号1
班级1
成绩1
成绩2
成绩3
出为按班级（从大到小）输出的总成绩（从低到高），格式如下（注意：按班级和总成绩排序，先按班级（从大到小）排序，然后同一班级内，按总成绩从小到大排序）
班级3，学号3，总成绩3
若同一个班级有多个学生，则在同一行中输出所有学生信息，且只有第一个学生输出班级号，从第二个学生开始，不输出班级号，只输出学号和总成绩，不同学生的信息之间用英文分号隔开，比如
12,10002,255.0
11,10001,266.0;10003,288.0*/
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
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
	double sum=0;
};
bool cmp(Student s1,Student s2){
if(s1.Class!=s2.Class){
	return s1.Class>s2.Class;
}else if(s1.sum!=s2.sum){
	return s1.sum<s2.sum;
}else return true;
}
int main()
{
	Student student[3];
	for(int i=0;i<3;i++){
		cin>>student[i].ID>>student[i].Class>>student[i].score.s1>>student[i].score.s2>>student[i].score.s3;
		student[i].sum=student[i].score.s1+student[i].score.s2+student[i].score.s3;
	}
	sort(student,student+3,cmp);
	printf("%d,%d,%.1lf",student[0].Class,student[0].ID,student[0].sum);
	for(int i=1;i<3;i++){
		if(student[i].Class==student[i-1].Class){
			printf(";%d,%.1lf",student[i].ID,student[i].sum);
		}else printf("\n%d,%d,%.1lf",student[i].Class,student[i].ID,student[i].sum);
	}
	return 0;
}
