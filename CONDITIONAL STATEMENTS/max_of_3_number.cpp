#include<iostream>
using namespace std;

int main()
{
int a,b,c;
cin >>a >>b>>c;
//write nested if statements to print maximum of 3 numbers
if(a>b && a>c)
cout<<a;
else if(b>c)
cout <<b;
else
cout<<c;
    
}