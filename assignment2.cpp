#include<iostream>
//#include<bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
bool findres(int arr[],int size){
	//unordered_set<int> sett;
	unordered_set<int> sumSet;
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=arr[i];
		
		if(sum==0 || sumSet.find(sum)!=sumSet.end()){
			return true;
		}
		sumSet.insert(sum);
	}
	return false;
}
int  main(){
	int size;
// 	cout<<"Enter Size:\n";
// 	cin>>size;
// 	cout<<"\n Enter array";
// 	int arr[size];
// 	for(int i=0;i<size;i++){
// 		cin>>arr[i];
// 	}
    size=7;
    int arr[]={1, 4, -2, -2, 5, -4, 3};
	bool res=findres(arr,size);
	if(res){
		cout<<"Subaray with sum 0 exist";
	}
	else{
		cout<<"Ahhaaaannnnn Not at all!!!!";
	}
	return 0;
}
