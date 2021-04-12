#include<iostream>
using namespace std;
int s_o_d(int num){
	if(num<10){
		return num;
	}
	return s_o_d(num/10)+num%10;
}
int main(){
	int num=0;
	cout<<"Enter \t";
	cin>>num;
	int res=s_o_d(num);
	cout<<"\n"<<res;
	return 0;
}
