#include<iostream>
using namespace std;
int calc(int arr[],int size){
	int localmin[size];
	int localmax[size];
	int lmin=0,lmax=0;
	for(int i=0;i<size;i++){
		localmin[i]=0;
		localmax[i]=0;
	}
	for(int i=0;i<size;i++){
		if(i==0){
			if(arr[i]<arr[i+1]){
				localmin[lmin]=arr[i];
				lmin++;
			}
		
		}
		if(arr[i]<arr[i+1] && arr[i]<arr[i-1]){
			localmin[lmin]=arr[i];
			lmin++;
		}
	
		if(i==size-1){
			if(arr[i]>arr[i-1]){
				localmax[lmax]=arr[i];
				lmax++;
			}
		
		}
		if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
			localmax[lmax]=arr[i];
			lmax++;
		}

	}
	int sum=0,limit=0;
	if(lmin>lmax){
		limit=lmax;
	}
	else{
		limit=lmin;
	}
	for(int i=0;i<limit;i++){
		if(localmin[i]!=0 && localmax[i]!=0){
			sum+=(localmax[i]-localmin[i]);
		}
	}
	return sum;
}
int  main(){
	int size;
	cout<<"Enter \t";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int res=calc(arr,size);
	cout<<res;
	return 0;
}
