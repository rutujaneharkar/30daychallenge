#include<iostream>
using namespace std;
int main(){
	string s;
	int arr[100];
	cout<<"\nEnter the String :";
	cin>>s;
	cout<<"\n=================================";
	cout<<"\n ENTERED STRING IS:"<<s;
	cout<<"\n size is:"<<s.length();
	cout<<"\n reverse string is:";
	for(int i=s.length()-1;i>=0;i--){
		
		cout<<s[i];
	}
}
