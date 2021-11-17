#include<iostream>
using namespace std;

int main(){
	int n,min=9999999,a;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(a<=min){
			min=a;
		}
	}
	cout<<min<<endl;
}

