#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n;
	double sum=0;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			sum+=1.0/(i*2-1);
			cout<<sum<<endl;
		}
			
		else{
			sum-=1.0/(i*2-1);
			cout<<sum<<endl;
		}
			
	}
	cout<<setprecision(8)<<fixed<<4*sum;
}

