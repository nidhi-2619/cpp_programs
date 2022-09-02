#include<iostream>
using namespace std;

int main()
{
    int m1,m2,m3;
    float Total,Avg;
    
    //write nested if statements to print grades
    
    Avg = (m1+m2+m3)/3;
    if (Avg>=60)
    cout<<"A";
    else if (Avg>=35 && Avg <60)
    cout<<"B";
    else
    cout<<"C";
}