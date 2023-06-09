
#include<iostream>
#include<stdio.h>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n<0) {
            n = abs(n); // converts -ve n to +n
            x = 1/x;
        }
        if(n%2==0){
            return myPow(x*x, n/2);
        }
        else{
           return x*myPow(x,n-1);
        }
    }
};