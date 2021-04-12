#include<iostream>
using namespace std;
int fact(int n,int k=1){
	if(n==0){
		return k;
	}
	k*=n;
	return fact(n-1,k);
}
int main(){
	int n;
	cout<<"Enter \t";
	cin>>n;
	int res=fact(n);
	cout<<res;
	return 0;
}
