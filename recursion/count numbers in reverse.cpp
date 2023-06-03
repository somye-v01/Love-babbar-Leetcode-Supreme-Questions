// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int count(int n){
    if(n==0){
        cout<<n<<" ";
        return 0;
    }
    
    count(n-1);
    
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    count(n);
}