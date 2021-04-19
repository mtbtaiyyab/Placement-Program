#include<iostream>
using namespace std;
bool calc(int arr[],int size){
	int l_sum=0,sum=0;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	for(int i=0;i<size;i++)
	{
		if(l_sum == sum-arr[i]){
			//cout<<"\n"<<l_sum<<" ";
			cout<<"\n Equilibirium position is "<<i+1;
			return true;
		}
		l_sum+=arr[i];
		sum-=arr[i];
	}
	return false;
}
int main(){
	int size;
	cout<<"Enter size:\t\n";
	cin>>size;
	int arr[size];
	cout<<"\n Enter array\n";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	bool res=calc(arr,size);
	if(res){
		cout<<"\n Equilibirium exist";
	}
	else{
		cout<<"\n Not Exist";
	}
	return 0;
}
