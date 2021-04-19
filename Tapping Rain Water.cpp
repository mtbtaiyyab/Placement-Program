#include<iostream>
using namespace std;
int calc(int arr[],int left[],int right[],int size){
	int water=0;
	for(int i=0;i<size;i++){
		water+=min(left[i],right[i])-arr[i];	
	}
	return water;
}
void rightar(int arr[],int right[],int size){
	
	right[size-1]=arr[size-1];
	for(int i=size-2;i>=0;i--){
		right[i]=max(right[i+1],arr[i]);
	}
	
}
void leftar(int arr[],int left[],int size){
	left[0]=arr[0];
	for(int i=1;i<size;i++){
		left[i]=max(left[i-1],arr[i]);
	}
}
int main(){
	int size;
	cout<<"Enter\t";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int leftarr[size],rightarr[size];
	leftar(arr,leftarr,size);
	rightar(arr,rightarr,size);
	int res= calc(arr,leftarr,rightarr,size);
	cout<<res;
//	for(int i=0;i<size;i++){
//		cout<<rightarr[i];
//	}
	return 0;
}
