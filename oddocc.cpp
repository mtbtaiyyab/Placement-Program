#include<iostream>
using namespace std;
int findres(int arr[],int size){
	int res=arr[0];
	for(int i=1;i<size;i++){
		res=res^arr[i];
	}
	return res;
}
int main(){
	int size;
	cout<<"Enter size\t";
	cin>>size;
	cout<<"Enter Array\n";
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int res= findres(arr,size);
	cout<<"\n Odd occuring element is\t"<<res;
}
