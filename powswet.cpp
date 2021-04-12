#include<iostream>
using namespace std;
void findPattern(char str[],int size){
	int count=1<<size;
//	cout<<count;
	for(int i=0;i<count;i++){
		for(int j=0;j<size;j++){
			if(i&(1<<j)){
				cout<<""<<str[j];
			}
			else{
				cout<<"_";
			}
		}
		cout<<"\n";
	}
}
int main(){
	int size;
	cout<<"Enter Length\t";
	cin>>size;
	char str[size];
	cin>>str;
//	cout<<"\n "<<str;
	findPattern(str,size);
	return 0;
}
