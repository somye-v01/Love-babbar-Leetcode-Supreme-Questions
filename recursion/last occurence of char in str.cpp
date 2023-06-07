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

int main() {
    // Write C++ code here
    string str = "dasbbgdedh";
    char x = 'd';
    int ans = -1;
    int ans2 = solveLeftToRight(str,x,0,ans);
    cout<<"Last index of "<<x<<" is : "<<ans2<<endl;
    return 0;
}