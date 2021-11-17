#include<iostream>
using namespace std;

int main(){
	int n,m=0,i=1;
	while(i<=10){
		cin>>n;
		if(n>=m)
			m=n;
		i++;
	}
	cout<<m<<endl;
}

