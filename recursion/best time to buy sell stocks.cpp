#include<iostream>
#include<string>
using namespace std;
class Solution {
public:

    void maxProfitFind(vector<int>& prices, int& i, int& min_price, int& max_profit){   
        if(i==prices.size()){
            return;
        }
        if(prices[i] < min_price){
            min_price=prices[i];
        }
        int profittoday = prices[i]-min_price;
        if(profittoday > max_profit){
            max_profit=profittoday;
        }
        int ni = i+1;
        maxProfitFind(prices,ni,min_price,max_profit);
    }

    int maxProfit (vector<int>& prices) {
        int min_price = prices[0];
        int max_profit = 0;
        int s_index=0;
        maxProfitFind(prices,s_index,min_price,max_profit);
        return max_profit;
    }
};