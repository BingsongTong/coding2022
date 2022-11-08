#include <cstddef>
#include <iomanip>
#include<iostream>
#include <string>
using namespace std;
typedef struct Student {
	string ID;
	string Class;
	string name;
	double s1;
	double s2;
	double s3;
	double sum;
	bool isDelete;
	struct Student* next;
}Student;
void Menu(Student* head);
void Input(Student* head);
void Order(Student* head);
void Delete(Student* head);
void Select(Student* head);
void Output(Student* head);
void Output1(Student* head);
void Quit(Student* head);
//设置一个函数指针数组
void (*fun[6])(Student* head) = {
	Input,
	Delete,
	Select,
	Order,
	Output,
	Quit
};
int main()
{
	Student* head;
	head = NULL;
	Menu(head);
	return 0;
}
void Menu(Student* head) {
	cout << "1.input" << endl;
	cout << "2.delete" << endl;
	cout << "3.select" << endl;
	cout << "4.order" << endl;
	cout << "5.output" << endl;
	cout << "6.quit" << endl;
	cout << "please input your option" << endl;
	int choice;
	cin >> choice;
	fun[choice - 1](head);
}
void Input(Student* head)
{
	Student* p1, * p2;
	Student* p0 = new Student;
	cout << "Id ";
	cin >> p0->ID;
	cout << "class ";
	cin >> p0->Class;
	cout << "name ";
	cin >> p0->name;
	cout << "score1 ";
	cin >> p0->s1;
	cout << "score2 ";
	cin >> p0->s2;
	cout << "score3 ";
	cin >> p0->s3;
	p0->isDelete = 0;
	p0->sum = p0->s1 + p0->s2 + p0->s3;
	p1 = head;
	p2 = p1;
	//此后p1一直指向搜索的末尾
	if (head == NULL) {
		head = p0;
		p0->next = NULL;
	}
	else {
		while ((p1->Class < p0->Class
			|| (p1->Class == p0->Class && p1->sum > p0->sum)) && p1->next != NULL) {//我们按照从小到大的顺序插入学生信息
			p2 = p1;
			p1 = p1->next;
		}
		//现在p1的后面位置应该把p0插进去了
		if (p1->next == NULL) {//p0插在末尾部分
			p1->next = p0;
			p0->next = NULL;
		}
		else {//p0插在中间部分
			 //如果p0就是应该插在开头
			if (head == p1) {
				head = p0;
				p0->next = p1;//!!!!!ATTENTION!
			}
			else {//如果插在中间但不是开头
				p2->next = p0;
				p0->next = p1;
			}
		}
	}
	cout << "continue?" << endl;
	string con;
	cin >> con;
	if (con == "no") {
		Menu(head);//传head而不是&head
	}
	else if (con == "yes") {
		Input(head);
	}
}
void Delete(Student* head)
{
	string target;
	cin >> target;
	Student* p;
	p = head;
	while (p != NULL ) {
		if ((p->name == target || p->ID == target)) {
			p->isDelete = 1;//这里有个bug，没有至少保留一个学生信息
		}
		p = p->next;
	}
		Output1(head);
		cout << "continue?" << endl;
		string con;
		cin >> con;
		if (con == "no") {
			Menu(head);//传head而不是&head
		}
		else if (con == "yes") {
			Input(head);
		}
}
void Select(Student* head)
{
	string target;
	cin >> target;
	Student* p;
	p = head;
	int sign = 1;
	while (p != NULL) {
		if ((p->ID == target || p->Class == target)&&p->isDelete==0) {
			sign = 0;
			cout << p->ID << ',' << p->Class << ',' << p->name << ',' << setiosflags(ios::fixed) << setprecision(1) << p->s1 << ',' << setiosflags(ios::fixed) << setprecision(1) << p->s2 << ',' << setiosflags(ios::fixed) << setprecision(1) << p->s3 << ',' << setiosflags(ios::fixed) << setprecision(1) << p->sum << endl;
		}
		p = p->next;
	}
	if (sign) {
		cout << "there is no eligible student" << endl;
		Menu(head);
	}
	else {
		cout << "continue?" << endl;
		string con;
		cin >> con;
		if (con == "no") {
			Menu(head);//传head而不是&head
		}
		else if (con == "yes") {
			Select(head);
		}
	}
}
void Order(Student* head)
{
	Output(head);
}
void Output1(Student* head)
{
	Student* p = head;
	while (p != NULL) {
		if (p->isDelete == 0) {
			cout << p->ID << ',' << p->Class << ',' << p->name << ',' << setiosflags(ios::fixed) << setprecision(1) << p->s1 << ',' << setiosflags(ios::fixed) << setprecision(1) << p->s2 << ',' << setiosflags(ios::fixed) << setprecision(1) << p->s3 << ',' << setiosflags(ios::fixed) << setprecision(1) << p->sum << endl;
		}
		p = p->next;
	}
}
void Output(Student* head)
{
	Output1(head);
	Menu(head);
}
void Quit(Student* stu)
{}
