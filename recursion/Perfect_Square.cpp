
#include<iostream>
#include<stdio.h>
using namespace std;
class Solution {
public:
    int numSquaresHelper(int n){
        //Base Case
        int i = 1;
        if(n==0){
            return 1;
        }
        if(n<0){
            return 0;
        }
       int ans2 = INT_MAX;
        while (i<=sqrt(n)){
        int perfectsquare = i * i;
        int ans = 1+numSquaresHelper( n - perfectsquare);
        if (ans < ans2){
            ans2 = ans;
        }
        i=i+1;
        }
        return ans2;
        
    }
    
    int numSquares(int n) {
        int ans = numSquaresHelper(n) -1;
        return ans;
    }
};