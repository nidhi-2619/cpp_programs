#include<iostream>
using namespace std;

int main(int argc, char **argv){
    int a,b;float c;
    a =100;
    b =7;
    c = (float)a/b;
    std::cout << c << std::endl;
}
// we cannot perform mod operation on float
// mod operation is allowed on char as they nothing but code of ascii which have a value 
// to include math function we include in the function
#include<cmath>
// we can use <math.h> also