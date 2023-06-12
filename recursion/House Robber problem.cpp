#include <iostream>
#include<climits>
#include<vector>
using namespace std;
class Solution {
public:
    int rob_helper(vector<int>& nums, int i){
        if(i>=nums.size()){
            return 0;
        }
        int sum = 0;
        //ya to mai ith ghar rob karunga
        int amt1 = nums[i]+rob_helper(nums,i+2);

        //ya ith ghar rob nahi karunga
        int amt2 = 0+rob_helper(nums,i+1);

        return max(amt1, amt2);
    }
    int rob(vector<int>& nums) {
        int i = 0;
        int ans = rob_helper(nums,i);
        return ans;
    }
};