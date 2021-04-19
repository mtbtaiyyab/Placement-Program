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
	cout<<"/n Snake Pattern\t\n";
	for(int i=0;i<r;i++){
		if(i%2==0){
			for(int j=0;j<c;j++){
				cout<<" "<<arr[i][j];
			}
		}
		else{
				for(int j=c;j>0;j--){
				cout<<" "<<arr[i][j-1];
			}
		}
		cout<<"\n";
	}
}
