#include<iostream>
using namespace std;
int sumofarray(int arr[],int size){
    
    int sum=0;
   
    for(int i=0;i<size;i++){
       
       
         sum=sum+arr[i];
         
        
    }
    cout<<"Sum of array ="<<sum;
    
}
int main(){
	int size;
	cout<<"Enter size of array =";
	cin>>size;
	int arr[100];
	cout<<"Enter array elements ="<<" ";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	
	}
	sumofarray(arr,size);
	return 0;
}
