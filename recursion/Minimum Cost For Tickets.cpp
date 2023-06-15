#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    
    int mincostTicketsHelper(vector<int> &days, vector<int>& costs, int i){
        //base case
        if(i >= days.size()){
            return 0;
        }
        //1 case solve
        int cost1 = costs[0] + mincostTicketsHelper(days,costs,i+1);
        int passend;
        passend = days[i] + 7 - 1;
        int j = i;
        while (j < days.size() && days[j] <= passend){
            j++;
        }
        int cost7 = costs[1] + mincostTicketsHelper(days,costs,j);
    
        passend = days[i] + 30 - 1;
         j = i;
        while (j < days.size() && days[j] <= passend){
            j++;
        }
        int cost30 = costs[2] + mincostTicketsHelper(days,costs,j);
    
    return min(cost1,min(cost7 , cost30));
}

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        return mincostTicketsHelper(days,costs,0);
    }
};