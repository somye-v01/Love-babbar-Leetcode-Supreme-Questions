#include<iostream>
#include<vector>
using namespace std;

void print_Subsequence(string s, string r, int i){
    if( i >= s.length()){
        cout<<r<<" ";
        return;
    }
    //exclude
    print_Subsequence( s,  r, i+1);
    
    //include
    r.push_back(s[i]);
    print_Subsequence( s,  r, i+1);
}

int main(){
    string s = "abc";
    string r = "";
    
    int i = 0;
    print_Subsequence(s,r,i);
}