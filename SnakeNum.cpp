#include <cstring>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int total;
	int **a=new int *[n];
	for(int i=0;i<n;i++){
		a[i]=new int[n];
		memset(a[i],0,n*sizeof(int));
	}
	total=a[0][n-1]=1;
	int x=0,y=n-1;
	//Right,Down,Left,Up fill the table
	while (total<n*n) {
		while(x+1<n&&!a[x+1][y]){//Down
			a[++x][y]=++total;
		}
		while(y-1>=0&&!a[x][y-1]){//Left
			a[x][--y]=++total;
		}
		while(x-1>=0&&!a[x-1][y]){//Up
			a[--x][y]=++total;
		}
		while(y+1<n&&!a[x][y+1]){// Right
			a[x][++y]=++total;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j!=n-1){
				cout<<a[i][j]<<' ';
			}else cout<<a[i][j];
		}
		if(i!=n-1){
			cout<<endl;
		}
	}
	for(int i=0;i<n;i++){
		delete[] a[i];
	}
	delete[] a;
	return 0;
}
