#include<iostream>
using namespace std;
int findres(int num,int pos){
	if(num & (1<<pos-1)){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int num;
	int pos;
	char choice;
	do{
		cout<<"\nEnter Number:\t";
		cin>>num;
		cout<<"\nposition to check bit is set:\t";
		
		cin>>pos;
		int res=findres(num,pos);
		if(res){
			cout<<"\nBit is set at the position";
		}
		else{
			cout<<"\nAhhaaaan Not All!!!!!!!";
		}
		cout<<"\n want to repeat Y/N\t";
		cin>>choice;
	}
	while(choice=='Y' || choice=='y');
	return 0;
}
