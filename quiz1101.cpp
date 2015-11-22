#include <iostream>
#include <stdio.h>
using namespace std;

float calculatee( float a){
float b=1;
float sum = 1;
    for (int i = a - 1; i > 0; --i ){
        sum = 1 + b * sum / i;
}
    return sum;}

int main(){
cout <<  calculatee(4) << endl;
    return 0;}
    
