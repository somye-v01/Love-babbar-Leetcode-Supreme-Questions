#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
class Solution {
public:

    bool isMatchHelper(string &s, int i, string &p, int j){
        if(i==s.size() && j==p.size()){
            return true;
        }//Base Case
        if(i == s.size() && j<p.size()){
            while(j<p.size()){
                if (p[j]!='*'){
                    return false;
                }
                j++;
                
            }
            return true;
        }
        if(s[i]==p[j]||p[j]=='?'){
            return isMatchHelper(s,i+1,p,j+1);
        }
        if(p[j]=='*'){
            bool caseA = isMatchHelper(s,i,p,j+1); // * = "";

            bool caseB = isMatchHelper(s,i+1,p,j); //* = match 1 char

            return (caseA || caseB);

        }
        return false;

    }

    bool isMatch(string s, string p) {
        int i = 0;
        int j = 0;
        bool ans = isMatchHelper(s,i,p,j);
        return ans;
    }
};