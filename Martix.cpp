#include <iostream>
using namespace std;
int main()
{
	double m1[3][3],m2[3][3],m3[3][3]={0};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>m1[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>m2[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				m3[i][j]+=m1[i][k]*m2[k][j];
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<m3[i][j];
			if(i<=2&&j!=2){
				cout<<' ';
			}
			if(i<2&&j==2){
				cout<<endl;
			}
		}
	}
	return 0;
}
