#include<iostream>
using namespace std;
int bubblesort(int *arr,int s){
	if(s==0 || s==1){
		return 1;
	}
	for(int i=0;i<s;i++){
	
     if(arr[i]>arr[i+1]){
    	swap(arr[i],arr[i+1]);
	}
    }
    bubblesort(arr,s-1);
}

int main(){
	int arr[5]={3,5,1,9,6};
	bubblesort(arr,5);
	for(int i=0;i<5;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
