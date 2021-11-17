#include<iostream>
using namespace std;

int main(){
	int a,b,c,i=10;
	cin>>a>>b>>c;
	
	while(!(i%3==a&&i%5==b&&i%7==c))
		i++;
	if(i<=100)
		cout<<i<<endl;
	else
		cout<<"No anwser"<<endl;
}

