#include<iostream>
using namespace std;
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void reverse(int arr[],int low,int high){
	while(low<high){
		swap(&arr[low],&arr[high]);
		low++;
		high--;
	}
}

void rotate(int arr[],int size,int point){
	reverse(arr,0,point-1);
	reverse(arr,point,size-1);
	reverse(arr,0,size-1);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int size,point;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"Enter point of rotation \t";
	cin>>point;
	rotate(arr,size,point);
	return 0;
}
