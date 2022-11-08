#include <cstdio>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
using namespace std;
struct Student{
	int ID;
	int Class;
	string name;
	double s1;
	double s2;
	double s3;
	double sum;
	bool isFind=0;
};
void Sort(Student stu[]);
void Input(Student stu[]);
void Search(Student stu[]);
void Output(Student stu[]);
int main()
{
	Student stu[7]={{10001,11,"Zhang",99.5,88.5,89.5}
		,{10002,12,"Yang",77.9,56.5,87.5}
		,{10003,11,"Liang",92.5,99.0,60.5}
		,{10004,11,"Cai",89.6,56.9,90.5}
		,{10005,14,"Fu",55.6,67.9,98.9}
		,{10006,12,"Mao",22.1,45.9,99.2}
		,{10007,13,"Zhan",35.6,67.9,88.0}};
	Input(stu);
	Sort(stu);
	Search(stu);
	Output(stu);
	return 0;
}
void Sort(Student stu[])
{
	for(int i=0;i<7;i++){
		for(int j=0;j<6-i;j++){
			if(stu[j].Class>stu[j+1].Class){
				Student temp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=temp;
			}else if(stu[j].Class==stu[j+1].Class&&stu[j].sum<stu[j+1].sum){
				Student temp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=temp;
			}
		}
	}
}
void Input(Student stu[])
{
	for(int i=0;i<7;i++){
	stu[i].sum=stu[i].s1+stu[i].s2+stu[i].s3;
	}
}
void Output(Student stu[])
{
	for(int i=0;i<7;i++){
		if(stu[i].isFind==1){
			cout<<stu[i].ID<<' '<<stu[i].Class<<' '<<stu[i].name<<' '<<setiosflags(ios::fixed)<<setprecision(1)<<stu[i].s1<<' '<<setiosflags(ios::fixed)<<setprecision(1)<<stu[i].s2<<' '<<setiosflags(ios::fixed)<<setprecision(1)<<stu[i].s3<<endl;
		}
	}
}
void Search(Student stu[])
{
	int Case;
	cin>>Case;
	switch (Case) {
		case 1:{
				   int from,to;
				   cin.get();
				   cin>>from;
				   cin.get();
				   cin>>to;
				   for(int i=0;i<7;i++){
					   if(stu[i].Class<=to&&stu[i].Class>=from){
						   stu[i].isFind=1;
					   }
				   }
				   break;
			   }
		case 2:{
				   int from,to;
				   cin.get();
				   cin>>from;
				   cin.get();
				   cin>>to;
				   for(int i=0;i<7;i++){
					   if(stu[i].ID>=from&&stu[i].ID<=to){
						   stu[i].isFind=1;
					   }
				   }
				   break;
			   }
		case 3:{
				   string target;
				   cin.get();
				   getline(cin,target,'*');
				   for(int i=0;i<7;i++){
					   int sign=1;
					   for(int j=0;j<target.length();j++){
						   if(target[j]!=stu[i].name[j]){
							   sign=0;
							   break;
						   }
					   }
					   if(sign){
						   stu[i].isFind=1;
					   }
				   }
				   break;
			   }
		case 4:{
				   double score;
				   cin>>score;
				   for(int i=0;i<7;i++){
					   if(stu[i].sum>=score){
						   stu[i].isFind=1;
					   }
				   }
				   break;
			   }
		case 5:{
				   int cs,from,to;
				   cin>>cs;
				   cin.get();
				   cin>>from;
				   cin.get();
				   cin>>to;
				   for(int i=0;i<7;i++){
					   if(stu[i].Class==cs&&stu[i].ID>=from&&stu[i].ID<=to){
						   stu[i].isFind=1;
					   }
				   }
				   break;
			   }
		default:{
					break;
				}
	}
}
