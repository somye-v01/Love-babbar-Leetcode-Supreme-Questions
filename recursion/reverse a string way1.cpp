#include<iostream>
using namespace std;
//1st way to solve this quesion
void rev(string s , int i){
    if (i < 0){
        return;
    }
    cout<<s[i];
    rev(s,i-1);
}

int main(){
    string str = "abcdeff";
    int i = str.length()-1;
    rev(str,i);
    return 0;
}