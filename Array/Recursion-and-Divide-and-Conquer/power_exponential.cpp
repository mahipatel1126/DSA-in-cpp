/*
Problem: Power Exponential (Pow(x, n)) – LeetCode 50

Description:
Compute x raised to the power n (x^n), where n can be a very large
positive or negative integer. A brute-force approach is inefficient
for large values of n.

Approach:
Binary Exponentiation (Fast Power)
- Repeatedly square the base.
- Multiply the result only when the current bit of n is set.
- For negative exponents, compute the reciprocal of x.

Edge Cases Handled:
- n = 0 → result is 1
- x = 0 → result is 0 (for n > 0)
- x = 1 or x = -1
- Negative values of n

Time Complexity: O(log n)
Space Complexity: O(1)
*/
#include <iostream>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1.0;
        if(x == 0) return 0.0;
        if(x == 1) return 1.0;
        if(x == -1 && n%2 == 0) return 1.0;
        if(x == 1 && n%2 != 0) return -1.0;
        long  binform=n;
        if(n<0){
            x=1/x;
            binform=-binform;
        }
        double ans =1;
        while(binform>0){
            if(binform % 2 == 1){
                ans*=x;
            }
            x*=x;
            binform/=2;
        }
        return ans;
    }
};
int main() {
    Solution s;

    cout << s.myPow(2.0, 10) << endl;  // 1024
    cout << s.myPow(2.1, 3) << endl;   // 9.261
    cout << s.myPow(2.0, -2) << endl;  // 0.25
       return 0;
}