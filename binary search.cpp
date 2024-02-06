#include<iostream>
using namespace std;
void print(int arr[],int s,int e){
	for (int i=s;i<=e;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
bool binarysearch(int arr[],int s,int e,int k){
	cout<<endl;
	print(arr,s,e);
	if(s>e)
	  return false;
	
	int mid=s+(e-s)/2;
	cout<<arr[mid]<<endl;
	if(arr[mid]==k)
	  return true;
	if (arr[mid]<k)
	{
		return binarysearch(arr,mid+1,e,k);
	}else{
		return binarysearch(arr,s,mid-1,k); 
	}
}
int main(){
	int arr[9]={2,4,6,10,14,16,45,33,32};
	int size=9;
	int key=33;
	cout<<"present"<<binarysearch(arr,0,5,16);
	return 0;
}
