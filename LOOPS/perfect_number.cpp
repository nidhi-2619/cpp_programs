#include<iostream>
using namespace std;

// perfect number are those whose double is equal to the sum of factors

int main(){
    int sum = 0,n;
    cin >> n;
    for(int i= 1;i<=n;i++){
        if((n%i==0)){
            sum=sum+i;
        }
    }
    if (sum==n*2)
    cout<<"Perfect Number ";
    else
    cout<<"Not a perfect number ";
}