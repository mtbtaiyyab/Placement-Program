#include<iostream>
#include<string.h>
using namespace std;
void printss(char str[],char curr[]="",int index =0){
	if(index==strlen(str)){
		cout<<curr<<" ";
		return;
	}
	printss(str,curr,index+1);
	printss(str,curr+str[index],index+1);
}
int main(){
	printss("ABC");
	return 0;
}
