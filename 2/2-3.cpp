#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	if(m==1)
		cout<<setprecision(1)<<fixed<<(n-80)*0.7;
	else if(m==2)
		cout<<setprecision(1)<<fixed<<(n-70)*0.6;
}

