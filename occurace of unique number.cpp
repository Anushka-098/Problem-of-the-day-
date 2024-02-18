#include<iostream>
using namespace std;
int occuranceofuniquenumber(int arr[],int size){
	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans^arr[i];
	}
	return ans;
	
}
int main(){
	int arr[7]={1,4,5,1,4,5,8};
    int ans=occuranceofuniquenumber(arr,7);
    
	cout<<ans;
	return 0;
}
