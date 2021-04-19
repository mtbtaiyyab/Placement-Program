#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findLeader(int arr[],int size){
	
	int max=arr[size-1];
	stack<int> s;
	for(int i=size-1;i>=0;i--){
		if(max<=arr[i]){
			//cout<<arr[i]<<" ";
			s.push(arr[i]);
			max=arr[i];
		}
	}
	while(!s.empty()){
		cout<<" "<<s.top();
		s.pop();
	}
}
int main(){
	int size;
	cout<<"Enter Size \t";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	findLeader(arr,size);
	return 0;
}
