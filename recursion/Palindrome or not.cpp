#include<iostream>

using namespace std;

bool check(string str, int start, int end){
    if(start>=end){
        return true;
    }
    if(str[start]!=str[end]){
        return false;
    }
    return check(str,start+1,end-1);
}

int main(){
    string str = "racecar";
    int start = 0;
    int end =str.length()-1;
    bool ans = check(str,start,end);
    cout<<ans;
    return 0;
}