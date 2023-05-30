// Implement pow(x, n) % M.
// In other words, given x, n and M, find (xn) % M.
 

// Example 1:

// Input:
// x = 3, n = 2, m = 4
// Output:
// 1
// Explanation:
// 32 = 9. 9 % 4 = 1.
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    // Code here
		    long long int ans = 1;
		    while( n > 0){
		    if (n & 1 == 1){
		        //n = odd;
		         ans = (ans * x) % M;
		        }
		        x = ( x * x ) % M;
		        n = n>>1; // n divided by 2
		}
		return ans % M;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int x, n, m;
    	cin >> x >> n >> m;
    	Solution ob;
    	long long int ans = ob.PowMod(x, n, m);
    	cout << ans <<"\n";
    }
	return 0;
}

//