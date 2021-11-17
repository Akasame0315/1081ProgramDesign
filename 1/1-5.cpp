#include<iostream>
using namespace std;

int main(){
	int n,m,a=0;
	cin>>n;
	for(int i=1;i<=4;i++){
		m=n%2;
		a=a*10+m;
		n=n/2;
	}
	for(int j=1;j<=4;j++){
		cout<<a%10;
		a=a/10;
	}
}
