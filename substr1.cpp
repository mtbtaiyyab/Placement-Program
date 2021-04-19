#include<iostream>
using namespace std;
int findres(int number){
	int count=0;
	while(number!=0){
		number=(number&(number<<1));
		count++;
	}
	return count;
}
int main(){
	int number;
	cout<<"Enter Number\t";
	cin>>number;
	int res;
	res= findres(number);
	cout<<"\n Result is \t"<<res;
	return 0;
}
