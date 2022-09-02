#include<iostream>
using namespace std;
// for each loop is iterate over the array
// we cannot modify the element of array using for each loop
//as the variable that is used to iterate over the array just create the copy of that
// so to actually modify the element of array we use reference
int main(){
    int a[10];
    for(auto x:a){
        cin>> x;
    }
    for (auto  x:a)
    cout<< x;
    //use of refernce
    //for(auto &x:a)
}
