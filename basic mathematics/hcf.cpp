#include <iostream>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	    // code here
	    if (A == 0) {
            
            return B;
        }
        if (B == 0) {
            
            return A;
        }

        while (A > 0 && B > 0) {
            if (A > B) {
                 A = A - B;
            } 
            else {
                B = B - A;
            }
        }

        if (A > B) {
            return A;
        } else {
            return B;
        }
	      
	} 
};