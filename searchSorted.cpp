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
	cout<<"Enter element to be searched:\t";
	int elem;
	cin>>elem;
	int R=0,C=c-1;
	while(R!=r-1 && C<0){
		if(arr[R][C]==elem){
			cout<<"element is at\t"<<"("<<R<<","<<C<<")";
			return 0;
		}
		else if(arr[R][C]>elem){
			C--;
			cout<<"\n changing column "<<C;
		}
		else if(arr[R][C]>elem){
			R++;
			cout<<"\n changing row "<<R;
		}
	}
	cout<<"\n Element not found!!";
}
