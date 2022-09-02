#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    bool prime = true;
    for (int i=2;i<=n;i++){
        if (n%i==0 && n!=i)
        prime = false;

    }
    if (prime)
    cout<<"PRIME";
    else{
        cout<<"Not a prime number";
    }

}