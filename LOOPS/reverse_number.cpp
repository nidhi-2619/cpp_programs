#include<iostream>
using namespace std;

int main(){
    int n,r;
    cin>> n;
    while(n!=0){
        r = n%10;
        n/=10;
        cout<<r;
    }
    
    
}