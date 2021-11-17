#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float n,m;
    cin>>n;
    m=(n-32)/9*5;
    
    cout<<fixed<<setprecision(3)<<m;
}
