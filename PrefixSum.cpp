#include<iostream>
using namespace std;
int getRes(int pref[],int from,int to)
{
	if(from==0){
		return pref[to];
	}
	else{
		return pref[from]-pref[to-1];
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
	int pref[size];
	for(int i=0;i<size;i++){
		if(i==0){
			pref[i]=arr[i];
		}
		pref[i]=pref[i-1]+arr[i];
	}
	int from,to;
	cout<<"\nFrom\t";
	cin>>from;
	cout<<"\nTo\t";
	cin>>to;
	int res=getRes(pref,from,to);
	cout<<"\n"<<res<<" ";
	return 0;
}
