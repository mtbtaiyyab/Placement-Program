#include<iostream>
using namespace std;
int main(){
	int r,c;
	cout<<"Enter row\t";
	cin>>r;
	cout<<"\n Enter column\t";
	cin>>c;
	int arr[r][c];
	cout<<"Enter Array:\n";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	
}
