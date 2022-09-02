#include<iostream>
using namespace std;
#include<cmath>

int main(int argc, char** argv){
  int u,v,a;
  float dist;

  cin >> u >> v >> a;
  dist = (float)((pow(u,2)-pow(v,2)))/(2*a);
  cout << dist << endl;

}