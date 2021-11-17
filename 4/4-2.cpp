#include<iostream>
using namespace std;

int main(){
	int n,a,b,c,d;
	cin>>n;
	
	a=(n/1000+3)%10;
	b=(n/100%10+3)%10;
	c=(n/10%10+3)%10;
	d=(n%10+3)%10;
	
	cout<<c<<d<<a<<b<<endl;
}
