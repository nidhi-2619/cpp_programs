#include<iostream>
using namespace std;

int main(){
    int basic_salary,net_salary;
    float allowance,deduction;
    cin >> basic_salary >> allowance >> deduction ;
    net_salary = basic_salary+(basic_salary*(allowance/100))-(basic_salary*(deduction/100));
    cout << net_salary << endl;
}