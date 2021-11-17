#include<iostream>
using namespace std;

int main(){
	int n,m,i=1,j=1,sum=0;
	cin>>n>>m;
	while(n<=m){
		while(j<=n){
			i*=2;
			j++;
		}
		sum+=i;
		n++;
	}
	cout<<sum;
}

