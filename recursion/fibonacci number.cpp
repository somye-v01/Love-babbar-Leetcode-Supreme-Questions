// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int fact(int n){
    if(n==0 || n == 1){
       return n;
    }

    
    int ans = fact(n-1)+fact(n-2);
    return ans;
    
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout << fact(n);
}