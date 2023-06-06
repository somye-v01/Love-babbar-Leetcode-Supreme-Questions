#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int>& v, int t){
    if (t == 0){
        return 0;
    }
    if(t < 0){
        return INT_MAX;
    }
    int mini = INT_MAX;
    for(int j = 0 ; j < v.size(); j++){
        int ans = solve(v,t-v[j]);
        if (ans != INT_MAX){
            mini = min(ans+1,mini);
            
        }
        
    }
    return mini;
}

int main(){
    vector<int> v = {1,2,3};
    int target = 5;
    
    int ans = solve(v , target);
    cout<<ans<<endl;
}