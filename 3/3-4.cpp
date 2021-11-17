#include<iostream>
using namespace std;

int main(){
	int n,m,i,count=0;
	cin>>n>>m;
	i=n;
	while(i<=m){
		if(i==((i/100)*(i/100)*(i/100))+((i/10%10)*(i/10%10)*(i/10%10))+((i%10)*(i%10)*(i%10))){
			cout<<i<<endl; 
			count+=1;
			i++;
		}
		else
			i++;
	}
	
	cout<<"Total:"<<count<<endl;
	
}

