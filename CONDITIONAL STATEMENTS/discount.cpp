#include<iostream>
using namespace std;

int main()
{
    int amount;
    float discount;
    cin>>amount ;
    //write nested onditions to print discounted amount
    if(amount>=5000){
    discount = amount-amount*20/100.0;
    cout << discount;
        
    }
    else if (amount>=2000 && amount<5000){
    discount= amount-amount*10/100.0;
    cout<<discount;}
    else if(amount<2000) {
        discount = amount-amount*5/100.0;
        cout<<discount;
    }
    
}