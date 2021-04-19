#include<iostream>
#include<vector>
using namespace std;
int calc(int leftarr[],int  rightarr[],int size){
	vector<int> freq(1000);
	int passres=0;
	for(int i=0;i<size;i++){
		freq[leftarr[i]]++;
		freq[rightarr[i]+1]--;
		}
	int max_m=freq[0];

	int len=freq.size();
	for(int i=0;i<len;i++){
		freq[i]+=freq[i-1];
		if(max_m<freq[i]){
			max_m=freq[i];
			passres=i;
		}

	}
	return passres;
}
int main(){
	int size;
	cout<<"Enter size:\t";
	cin>>size;
	int leftarr[size],rightarr[size];
	cout<<"\n Enter left array:\n";
	for(int i=0;i<size;i++){
		cin>>leftarr[i];
	}
	cout<<"\n Enter right array:\n";
	for(int i=0;i<size;i++){
		cin>>rightarr[i];
	}
	int res=calc(leftarr,rightarr,size);
	cout<<"\n Result is "<<res;
	return 0;
}
