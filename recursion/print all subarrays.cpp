
#include <iostream>
#include<vector>
using namespace std;

void printallsubarrays(vector<int>& v, int start, int end){
    if(end==v.size()){
        return;
    }
    for(int i = start;i<=end;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    printallsubarrays(v,start,end+1);
}
//tried doing it within one function only but failed, so adding another function.
void callforallstarts(vector<int>& v, int start, int end){
    for(int i = 0; i<v.size(); i++){
        end =i;
        printallsubarrays( v, i,  end);
    }
}

int main() {
    
    vector<int> v = {1,2,3,4,5};
    callforallstarts(v,0,0);

    return 0;
}