#include <ios>
#include <iostream>
using namespace std;
class Rectangle{
	public:
		double S;
		double C;
		void getSC(double X,double Y,double A,double B);
	private:
		double x;
		double y;
		double a;
		double b;
};
void Rectangle::getSC(double X, double Y, double A, double B){
	x=X;
	y=Y;
	a=A;
	b=B;
	S=(x-a)*(y-b);
	C=2*(a-x+b-y);
}
int main()
{
	double x,y,a,b;
	Rectangle r1;
	cin>>x>>y>>a>>b;
	r1.getSC(x,y,a,b);
	cout<<r1.C<<' '<<r1.S;
	return 0;
}
