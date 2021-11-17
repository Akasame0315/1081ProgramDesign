#include<iostream>
using namespace std;

int main(){
	int n,s,d,g1,g2;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s>>d;
		
		g1=(s+d)/2;
		g2=(s-d)/2;
		
		if(g1<0||g2<=0)
			cout<<"impossible"<<endl;
		else if((s+d)%2!=0||(s-d)%2!=0)
			cout<<"impossible"<<endl;
		else if(g2>g1)
			cout<<g2<<g1<<endl;
		else
			cout<<g1<<g2<<endl;
	}
}

