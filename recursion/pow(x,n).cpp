//slower

#include<iostream>
#include<stdio.h>
using namespace std;
class Solution {
public:
    double solve(double x, int n){
        if(n==0){
            return 1;
        }
        double ans = x * solve(x,n-1);
        return ans;
    }
    double myPow(double x, int n) {
        double ans = 0;
        if (n==INT_MAX){
            if(x == 1){
                return 1;
            }
            if(x == 0){
                return 0;
            }
            if(x == -1){
                return -1;
            }
        }
        else if (n==INT_MIN){
            if(x == 1 || x == -1){
                return 1;
            }
            if(x == 0){
                return 0;
            }
        }
        else if(n>=0){
        ans =  solve(x,n);
        }
        else if(n<0){
            n = -n;
             ans = solve(x,n);
            ans = 1.0/ans;
            
        }
        return ans;
    }
};