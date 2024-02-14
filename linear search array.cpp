#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return 1;
		} 		
    }
     return 0;
}
int main(){
	int size;
	cout<<"Enter size =";
	cin>>size;
	int arr[size];
	cout<<"Enter array elements="<<" " ;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	
	}
	
	int key=10;
	
    bool found=	linearsearch(arr,size,key);
    if(found){
    	cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not found"<<endl;
	}
	return 0;
}

