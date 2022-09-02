#include <iostream>
using namespace std;

int sumofnumbers(int n){
    
    int s = (n*(n+1))/2;

    return s;
}

void main()
{
   int n,sum;
   cin >> n ;
   sum = sumofnumbers(n);
   cout << sum << endl;

}