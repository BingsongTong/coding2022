/*输入三个用户的学号(要求为5位自然数，注意高位不能为0)，高数成绩（要求为2位整数，一位小数，其他成绩要求相同），大学物理成绩和英语成绩，按输入顺序进行确认输出，最后输出总成绩（要求小数点之后保留一位小数）。
输入时，按学生输入每个学生的信息，输入一个学号，三个分数，每个输入都用回车作为结束，输出格式为（注意间隔都是两个空格）：
学号1 高数成绩1 大学物理成绩1 英语成绩1 总成绩1
学号2 高数成绩2 大学物理成绩2 英语成绩2 总成绩2
学号3 高数成绩3 大学物理成绩3 英语成绩3 总成绩3
*/
#include<iostream>
#include<iomanip>
using namespace std;
struct Stu {
    int id;
    double gs,dw,en;
    double sum;
};
int main()
{
    Stu stu[3];
    for(int i=0; i<3; i++) {
        cin>>stu[i].id>>stu[i].gs>>stu[i].dw>>stu[i].en;
        stu[i].sum=stu[i].dw+stu[i].gs+stu[i].en;
    }
    for(int i=0; i<3; i++) {
        if(i!=3) {
            //cout<<stu[i].id<<"  "<<setprecision(1)<<stu[i].gs<<"  "<<setprecision(1)<<stu[i].dw<<"  "<<setprecision(1)<<stu[i].en<<"  "<<setprecision(1)<<stu[i].sum<<endl;
 printf("%d  %.1lf  %.1lf  %.1lf  %.1lf\n",stu[i].id,stu[i].gs,stu[i].dw,stu[i].en,stu[i].sum);     
          } else// cout<<stu[i].id<<"  "<<setprecision(1)<<stu[i].gs<<"  "<<setprecision(1)<<stu[i].dw<<"  "<<setprecision(1)<<stu[i].en<<"  "<<setprecision(1)<<stu[i].sum;
    {printf("%d  %.1lf  %.1lf  %.1lf  %.1lf",stu[i].id,stu[i].gs,stu[i].dw,stu[i].en,stu[i].sum); }
    }
   // cout<<6.3<<endl;
    return 0;
}