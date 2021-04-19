#include<iostream>
using namespace std;
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void reversal(int arr[],int size){
	int low=0,high=size;
	while(low<high){
		swap(&arr[low],&arr[high-1]);
		low++;
		high--;
	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int size;
	cout<<"Enter Size\t";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	reversal(arr,size);
	return 0;
}
