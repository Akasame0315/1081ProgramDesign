#include<iostream>
using namespace std;

int main(){
	int a,b,i,sum=0;
	cin>>a>>b;
	i=a;
	while(i<=b){
		if(i%2==1)
			sum+=i;
	i++;
	}
	cout<<sum<<endl;
}

