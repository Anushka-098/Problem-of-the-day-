#include<iostream>
using namespace std;
reverse(string &str,int i,int j){
	if(i>j)
	   return -1;
	swap(str[i],str[j]);
	i++;
	j--;
	reverse(str,i,j);
	
}
int main(){
	string s="anushka";
	reverse(s,0,s.length()-1);
	cout<<s<<endl;
	return 0;
}
