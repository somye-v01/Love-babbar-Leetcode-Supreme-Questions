// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int> &arr, int s, int e , int key){
    if (s > e){
        return -1;
    }
    int mid =( s + e)/2;
    if(arr[mid] == key){
        return mid;
    }
    if (arr[mid]>key){
        return bs( arr , s , mid - 1, key);
    }
    return bs(arr, mid+1,e,key);
}

int main(){
    vector<int> v = {10,20,30,40,45,50};
    int s = 0;
    int size = v.size();
    int e = size-1;
    int key = 45;
    int ans =  bs(v,s,e,key);
    if (ans == -1){
        cout<<"Key not found"<<endl;
    }
    else{
    cout<<"Key found at index "<<ans<<endl;
    }
}