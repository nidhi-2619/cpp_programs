#include<iostream>
using namespace std;

int main()
{
    int rev=0;
    int r,n;
    cin>>n;
    int m=n;

    //write a loop to find reverse of a number
    //check it is a palindrome
    while(n!=0){
        r = n%10;
        n/=10;
        rev = rev*10+r;
    }
    if(rev==m)
    cout<<"palindrome";
    else
    cout<<"not palindrome";
}