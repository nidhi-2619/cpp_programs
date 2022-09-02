#include <iostream>
using namespace std;
#include<cmath>
int main()
{
    float r1,r2;
    int b,a,c;
    cin >> b >> a >> c ;
    r1 = (float)(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    r2 = (float)(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    cout << r1 << " ," << r2 << endl;
  return 0;
}