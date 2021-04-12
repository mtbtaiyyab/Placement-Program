#include<iostream>
using namespace std;
int ropecut(int num,int a,int b,int c){
	
	if(num==0)
	{
		return 0;
	}
	if(num<0){
		return -1;
	}
	int res;
	int a1=ropecut(num-a,a,b,c);
	int b1=ropecut(num-b,a,b,c);
	int c1=ropecut(num-c,a,b,c);
	if(a1>b1 && a1>c1){
		res=a1;
	}
	if(b1>a1 && b1>c1){
		res=b1;
	}
	if(c1>a1 && c1>b1){
		res=c1;
	}
	if(res<0){
		return -1;
	}
	return res+1;
}
int main(){
	int num,a,b,c;
	cout<<" Enter Values \t";
	cin>>num>>a>>b>>c;
	int res=ropecut(num,a,b,c);
	cout<<res;
	return 0;
}
