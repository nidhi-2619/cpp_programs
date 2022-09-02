#include<iostream>
using namespace std;

int main(){

int n,d;
cin>> n;
while (n!=0){
    d = n%10;
    n/=10;
    cout<<d<<" ";
}
    
}