#include<iostream>
using namespace std;
int getmin(int num[],int size){
	int mini= INT_MAX;
	for(int i=0;i<size;i++){
//		if(num[i]<min){
//			min=num[i];
//		}
    mini=min(mini,num[i]);
	}
	return mini;
}
int getmax(int num[],int size){
	int max= INT_MIN;
	for(int i=0;i<size;i++){
		if(num[i]>max){
			max=num[i];
		}
	}
	return max;
}
int main(){
	int size;
	cin>>size;
	int num[100];
	//input in array
	for(int i=0;i<size;i++){
		cin>>num[i];
	}
	cout<<"maximum value is ="<<getmax(num,size)<<endl;
	cout<<"minimum value is ="<<getmin(num,size)<<endl;
	return 0;
}
