#include <iostream>
using namespace std;
int BinarySearch(int a[],int beg,int end,int target);
int main()
{
	int num[10];
	for(int i=0;i<10;i++){
		cin>>num[i];
	}
	int target;
	cin>>target;
	int find=BinarySearch(num,0,9,target);
	if(find==-1){
		cout<<-1;
		return 0;
	}
	if(num[find]==target){
		cout<<find;
	}else {
	cout<<-1;
	}
	return 0;
}
int BinarySearch(int a[],int beg,int end,int target)
{
	int mid=(end+beg)/2;
	if(beg>end||target>a[end]||target<a[beg]){
		return -1;
	}
	if(target<a[mid]){
		return BinarySearch(a, beg,mid-1, target);
	}else if(target>a[mid]){
		return BinarySearch(a, mid+1,end, target);
	}else {
	return mid;
	}
}
