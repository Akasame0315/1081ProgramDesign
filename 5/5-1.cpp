#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int n,m,count=0;
	cin>>n>>m;
	for(int i=n;i<=m;i++){
		if(i==pow(i/100,3)+pow(i/10%10,3)+pow(i%10,3)){
			cout<<i<<endl;;
			count+=1;
		}
	}
	cout<<"Total:"<<count<<endl;
}

