#include <cmath>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	double d=b*b-4*a*c;
	if(d<0){
		cout<<"no root";
	}else if(d==0){
		double r=-b/(2*a);
		if(r==-0)r=0;
		cout.precision(6);
		cout<<r;
	}else{
		d=sqrt(d);
		double r1=-(b+d)/(2*a);
		double r2=(d-b)/(2*a);
		cout.precision(6);
		cout<<r1<<' '<<r2;
	}
	return 0;
}
