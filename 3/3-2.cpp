#include<iostream>
using namespace std;

int main(){
	int n,i=0;
	cin>>n;
	if(n==0){
		cout<<0<<endl;
	}
	else{
		while(n>0){
			i++;
			n=n/10;
		}
		cout<<i<<endl;	
	}
	
	
	
}

