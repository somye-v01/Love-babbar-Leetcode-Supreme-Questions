// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int power(int n){
    if(n==0){
       
        return 1;
    }
    
    int ans = 2* power(n-1);
    
    
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout << power(n);
}