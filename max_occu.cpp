#include<iostream>
using namespace std;
int binarySearch(int arr[],int l,int h,int x){
	if(h<l){
		return -1;
	}
	int mid=l+(h-l)/2;
	if(arr[mid]==x){
		return mid;
	}
	if(arr[mid]>x){
		return binarySearch(arr,l,mid-1,x);
	}
	else{
		return binarySearch(arr,mid+1,h,x);
	}
}
int findRes(int arr[],int size,int x){
	
	int index=binarySearch(arr,0,size-1,x);
	
	if(index==-1){
		return 0;
	}
	int count=1,left=index-1;
	while(left>=0 && arr[left]==x){
		count++;
		left--;
	}
	int right=index+1;
	while(right<=size-1 && arr[right]==x){
		count++;
		right++;
	}
	return count;
}
int main(){
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
	int res=findRes(arr,size,x);
	cout<<"\n"<<res;
	return 0;
}
