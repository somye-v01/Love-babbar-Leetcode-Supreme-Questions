#include <iostream>
#include<limits.h>
using namespace std;
int maxi = INT_MIN;
int findMax(int arr[], int n, int i){
    if(i==n){
        return INT_MIN;
    }
    
    if(arr[i]>maxi){
         maxi = arr[i];
    }
    findMax(arr,n,i+1);
    return maxi;
    
}

int main(){
    int arr[6] = {10,2,15,20,25,14};
    int n = 6;
    int i = 0;
    int max_element = findMax(arr,n,i);
    cout<<max_element<<endl;
}