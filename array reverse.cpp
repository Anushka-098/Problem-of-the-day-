#include <iostream>
using namespace std;
int reversearray(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main()
{
    int arr[5]={3,7,5,9,10};
    int brr[6]={9,5,2,11,8,67};
    reversearray(arr,5);
    reversearray(brr,6);
    printarray(arr,5);
    printarray(brr,6);
    return 0;
}


