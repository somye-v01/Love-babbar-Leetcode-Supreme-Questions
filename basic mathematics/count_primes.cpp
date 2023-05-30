#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n ==1){
            return 0;
        }
        vector<bool> prime(n,true);

        prime[0]=prime[1]=false;

        int c = 0;

        for(int i = 2; i < n ; i++){
            if(prime[i]){
            c++;
            }
            for(int j = 2 * i; j < n ; j=j+i){
                prime[j]=false;
            }
        }
        return c;
    }
};