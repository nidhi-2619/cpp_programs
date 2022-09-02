#include<iostream>
using namespace std;

int main(){
    int choice;
    int x,y;
    cin >> choice;
    cin>> x >> y;
    switch(choice){
        case 1:
        cout<< x+y;
        break;
        case 2:
        cout<<x-y;
        break;
        case 3:
        cout<<x*y;
        break;
        case 4:
        cout<<x/y;
        break;
    }
}