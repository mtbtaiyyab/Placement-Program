#include<iostream>
using namespace std;
int findRes(int arr[],int l,int h,int x){
	int mid;
	if(l>h){
		return -1;
	}
	mid=l+(h-l)/2;
	if(x==arr[mid] &&(mid==0 || arr[mid-1]!=x)){
		return mid;
	}
	else if(arr[mid]>=x ){
		return findRes(arr,l,mid-1,x);
	}
	else{
		return findRes(arr,mid+1,h,x);
	}
}
int  main(){
	int size;
	cout<<"Enter Size:\t";
	cin>>size;
	int arr[size];
	cout<<"\n Enter array\n";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}	
	cout<<"\n Enter Searching element\t";
	int x,l=0,h=size-1;
	cin>>x;
	int res=findRes(arr,l,h,x);
	cout<<"\n"<<res;
	return 0;
}
