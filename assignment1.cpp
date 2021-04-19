#include<iostream>
using namespace std;
bool findres(int arr[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	if(sum%3!=0){
		return false;
	}
	int sum1=sum/3;
	int sum2=2*(sum/3);
	int prefSum=0;
	int ind1=-1,ind2=-1;
	for(int i=0;i<size;i++){
		prefSum+=arr[i];
		
		if(prefSum==sum1 && ind1==-1){
			ind1=i;
		}
		else if(prefSum==sum2 && ind1!=-1){
			ind2=i;	
			break;s	
		}
	}
	if(ind1!=-1 && ind2!=-1){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int size;
	cout<<"Enter size\n";
	cin>>size;
	cout<<"Enter Array\n";
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	bool res=findres(arr,size);
	if(res){
		cout<<"It can be divided into 3 parts having equal sums";
	}
	else{
		cout<<"Ahhaaaannnn!not at all";
	}
	return 0;
}
