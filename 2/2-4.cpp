#include<iostream>
using namespace std;

int main(){
	int n,m1=0,m2=0,m3=0,m4=0,m5=0,m6=0,m7=0,m8=0,m9=0;
	cin>>n;
	if(n<0)
		cout<<"error";
	else{
		while(n>=2000){
		m1+=1;
		n=n-2000;
		}
		while(n>=1000){
		m2+=1;
		n=n-1000;
		}
		while(n>=500){
		m3+=1;
		n=n-500;
		}
		while(n>=200){
		m4+=1;
		n=n-200;
		}
		while(n>=100){
		m5+=1;
		n=n-100;
		}
		while(n>=50){
		m6+=1;
		n=n-50;
		}
		while(n>=10){
		m7+=1;
		n=n-10;
		}
		while(n>=5){
		m8+=1;
		n=n-5;
		}
		while(n>=1){
		m9+=1;
		n=n-1;
		}
	cout<<2000<<": "<<m1<<endl;
	cout<<1000<<": "<<m2<<endl;
	cout<<500<<": "<<m3<<endl;
	cout<<200<<": "<<m4<<endl;
	cout<<100<<": "<<m5<<endl;
	cout<<50<<": "<<m6<<endl;
	cout<<10<<": "<<m7<<endl;
	cout<<5<<": "<<m8<<endl;
	cout<<1<<": "<<m9<<endl;
	}
	
}

