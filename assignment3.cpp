#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool findres(int arr[],int size){
	unordered_map<int,int> hm;
	int sum=0;
	int max_len=0;
	int end_ind=-1;
	for(int i=0;i<size;i++){
		arr[i]=(arr[i]==0)?-1:1;
	}
	for(int i=0;i<size;i++){
		sum+=arr[i];
		
		if(sum==0){
			max_len=i+1;
			end_ind=i;
		}
		
		if(hm.find(sum)!=hm.end()){
			if(max_len<i-hm[sum]){
				max_len=i-hm[sum];
				end_ind=i;
			}
		}
		else{
			hm[sum]=i;
		}
	}
	for(int i=0;i<size;i++)
	{
		arr[i]=(arr[i]==-1)?0:1;
	}
	
	if(end_ind!=-1){
		cout<<end_ind-max_len+1<<" to "<<end_ind<<"\n";
		return true;	
	}
	else{
		return false;
	}
}
int main(){
	int size;
// 	cout<<"Enter Size:\t";
// 	cin>>size;
// 	int arr[size];
// 	cout<<"\nEnter array:\n";
// 	for(int i=0;i<size;i++){
// 		cin>>arr[i];
// 	}
    size=7;
    int arr[]={1,0,1,1,1,0,0};
	bool res=findres(arr,size);
	if(res){
		cout<<"Subarray with equal no. of 0's and 1's exist ";
	}
	else{
		cout<<"Ahhhaaaaannn!not At ALL";
	}
	
	return 0;
}
