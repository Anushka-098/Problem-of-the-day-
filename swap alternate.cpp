#include<iostream>
using namespace std;
void swapalternate(int arr[],int n){
	for(int i=0;i<n;i+=2){
		if(i+1<n){
		   swap(arr[i],arr[i+1]);	
		}
	}
}
void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[6]={1,2,3,4,5,6};
	int brr[5]={3,7,4,5,6};
	swapalternate(arr,6);
	swapalternate(brr,5);
	printarray(arr,6);
	printarray(brr,5);
	return 0;
}
