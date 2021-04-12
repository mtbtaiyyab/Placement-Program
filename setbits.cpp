#include<iostream>
using namespace std;
int main(){
	int no;
	cout<<"Enter number\t";
	cin>>no;
	int res=0;
	while(no>0){
		no=no&(no-1);
//		cout<<"\n"<<no;
		res++;
//		cout<<"\n res\t"<<res;
	}
	cout<<"\nNo. of bits are\t"<<res;
}
