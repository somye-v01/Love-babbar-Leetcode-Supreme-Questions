// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int solveLeftToRight(string s, char x, int i, int ans){
   
    // cout<<s.length()<<endl;
    if (i>=s.size()){
        return ans;
    }
    if(s[i]==x){
        ans = i;
    }
     return solveLeftToRight(s,x,i+1,ans);
}

int solveRightToLeft(string s, char x, int i, int ans){
    if(i<0){
        return ans;
    }
    if(s[i]==x){
        return i;
    }
    return solveRightToLeft(s,x,i-1,ans);
}

int main() {
    // Write C++ code here
    string str = "dasbbgdedh";
    char x = 'd';
    int ans = -1;
    int ans2 = solveLeftToRight(str,x,0,ans);
    
    int lastindex = str.length()-1;
    int ans3 = solveRightToLeft(str,x,lastindex,ans);
    
    cout<<"Last index of "<<x<<" going from L to R is : "<<ans2<<endl;
    cout<<endl;
    cout<<"Last index of "<<x<<" going from R to L is : "<<ans3<<endl;
    return 0;
}