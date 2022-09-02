#include<iostream>
using namespace std;
#include<cmath>

int main(){
   int x1,y1,x2,y2;
   float dist;

   cin >> x1 >> y1 >> x2 >> y2;
   dist = (float)sqrt(pow((x2-x1),2) + pow((y2-y1),2));
   cout << dist << endl;

}