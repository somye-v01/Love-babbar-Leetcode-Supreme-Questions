#include<iostream>
#include<string>
using namespace std;

class Solution {
public:

    string addRE(string& num1, int p1, string& num2, int p2, int carry = 0){
        //Base Case
        if(p1<0 and p2<0){
            if(carry!=0){
                return string(1,carry+'0');
                
            }
            return "";
        }
        int n1;
        int n2;
        //ek case sambhal lo
        if(p1>=0){
         n1 = num1[p1]-'0'; //to convert char to int
        }
        else{
             n1 = 0;
        }
        if(p2>=0){
         n2 = num2[p2]-'0';
        }
        else{
             n2 = 0;
        }
        int csum = n1+n2+carry;

        int digits = csum%10;
         carry = csum/10;
        string ans = "";
        ans.push_back(digits+'0');
        ans+=addRE(num1,p1-1,num2,p2-1,carry);
        return ans;

    }

    string addStrings(string num1, string num2) {
        string ans = addRE (num1,num1.length()-1,num2,num2.length()-1,0);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};