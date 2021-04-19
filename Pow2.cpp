#include<iostream>
using namespace std;
int main(){
	int x;
	char ch;
	do{
		cout<<"\n Enter Number\t";
		cin>>x;
		int  res= x&(x-1);
	//	cout<<" \n"<<res;
	//	cout<<" \n reverse\t "<<!res;
		if(x && !(x & (x-1))){
			cout<<"True";
		}
		else{
			cout<<"False";
			}
		cout<<"\nContinue? Y/N";
		cin>>ch;
	}
	while(ch=='Y'|| ch=='y');
	return 0;
}
