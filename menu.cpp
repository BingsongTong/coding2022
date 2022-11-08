#include <cstdio>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
void Fun();
struct Stu {
    int id;
    double gs,dw,en;
    double sum;
	double ave;
};
bool cmp(Stu a,Stu b){
		return a.sum<b.sum;
}
int main()
{
	cout<<setw(30)<<""<<"1.Input"<<endl;
	cout<<"                              "<<"2.Output"<<endl;
	cout<<"                              "<<"3.Order"<<endl;
	cout<<"                              "<<"4.Quit"<<endl;
	char a;
	cin>>a;
	switch (a) {
		case 'i':{cout<<"Please input info of the three students:"<<endl;
					 Fun();
				break; }
		case 'o':{cout<<"You are trying to Output info";
					 break;}
		case 'm':{cout<<"You are trying to Make things ordered";
				 break;}
		case 'q':{cout<<"You are about to Quit";
				 break;}
		default:{cout<<"Wrong input";
				break;}
	}
	return 0;
}
void Fun()
{
    Stu stu[3];
    for(int i=0; i<3; i++) {
        cin>>stu[i].id>>stu[i].gs>>stu[i].dw>>stu[i].en;
        stu[i].sum=stu[i].dw+stu[i].gs+stu[i].en;
		stu[i].ave=stu[i].sum/3;
    }
//对结构体进行排序，定义排序规则后排序
sort(stu,stu+3,cmp);
for(int i=0;i<3;i++){
if(i==2){
	printf("%d,%.1lf,%.1lf",stu[i].id,stu[i].sum,stu[i].ave);
}else{
		printf("%d,%.1lf,%.1lf\n",stu[i].id,stu[i].sum,stu[i].ave);
}
}
}
