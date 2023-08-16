//gcd no
#include<iostream>
using namespace std;
int gcd(int n1,int n2){
		int val=min(n1,n2);
	cout<<"\n minimum value is:"<<val;
		

	 while (val > 0) {
        if (n1 % val == 0 && n2 % val == 0) {
            break;
        }
        val--;
    }
 
    return val;
    
}
int main(){
	int n1,n2;
	cout<<"enter the numbers";
	cin>>n1;
	cin>>n2;

		cout<<"\nGCD is of  :"<<n1<<"\tand\t"<<n2 << " is\t "
         << gcd(n1,n2);
         return 0;
}

 

