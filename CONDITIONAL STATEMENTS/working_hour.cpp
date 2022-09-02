#include<iostream>
using namespace std;

int main()
{
    int hour;
    cin >> hour;
    //write condition here to print "working" or "leisure"
    if (hour>=9 && hour<=18){
        cout<<"working";
    }
    else{
        cout<<"leisure";
    }
    
}



