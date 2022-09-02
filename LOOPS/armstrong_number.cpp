#include<iostream>
using namespace std;

int main(){
    int n,p,a,sum = 0;
    cin>>n;
    int m = n;
    while(n!=0){
        a = n%10;
        n = n/10;
        sum=sum+(a*a*a);
    }
    if (m==sum){
        cout<<"Armstrong";
    }
    else
    cout<<"Not armstrong";
}