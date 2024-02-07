#include<iostream>
using namespace std;
print(int n){
	if (n==0)
	   return 1;
	
	print(n-1);
    	cout<<n<<endl;
}
int main(){
	int n;
	cout<<"Enter n = ";
	cin>>n;
	print(n);

	return 0;
}
