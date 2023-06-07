#include<iostream>
#include<algorithm>
using namespace std;

void rev(string& s, int start, int end){
    if(start>end){
        return;
    }
    swap(s[start],s[end]);
    
    rev(s,start+1,end-1);
}

int main(){
    string str = "abcdeff";
    int start = 0;
    int end =str.length()-1;
    rev(str,start,end);
    cout<<str;
    return 0;
}