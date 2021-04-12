#include<iostream>
#include<cstring>
using namespace std;
bool palindrome(char str[],int start,int end){
	if(start==end){
		return true;
	}
	if(start>end){
		return true;
	}
	if(str[start]!=str[end-1]){
		return false;
	}
	return palindrome(str,start+1,end-1); 
}
int main(){
	char name[20];
	cout<<"Enter \t";
	cin>>name;
	int size=strlen(name);
	bool res=palindrome(name,0,size);
	if(res==true){
		cout<<" \n palindrome";
	}
	else{
		cout<<"\n Not Palindrome";
	}
}
