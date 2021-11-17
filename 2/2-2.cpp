#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	if(n==1&&m>=21||n==2&&m<=18)
		cout<<"Aquarius"<<endl;
	else if(n==2&&m>=19||n==3&&m<=20)
		cout<<"Pisces"<<endl;
	else if(n==3&&m>=21||n==4&&m<=20)
		cout<<"Aries"<<endl;
	else if(n==4&&m>=21||n==5&&m<=21)
		cout<<"Taurus"<<endl;
	else if(n==5&&m>=22||n==6&&m<=21)
		cout<<"Gemini"<<endl;
	else if(n==6&&m>=22||n==7&&m<=22)
		cout<<"Cancer"<<endl;
	else if(n==7&&m>=23||n==9&&m<=23)
		cout<<"Leo"<<endl;
	else if(n==8&&m>=24||n==9&&m<=23)
		cout<<"Virgo"<<endl;
	else if(n==9&&m>=24||n==10&&m<=23)
		cout<<"Libra"<<endl;
	else if(n==10&&m>=24||n==11&&m<=22)
		cout<<"Scorpio"<<endl;
	else if(n==11&&m>=23||n==12&&m<=21)
		cout<<"Sagittarius"<<endl;
	else if(n==12&&m>=22||n==1&&m<=20)
		cout<<"Capricorn"<<endl;
}

