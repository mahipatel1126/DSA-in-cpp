/*
    Problem:
    Convert a Roman numeral into an integer.

    Roman Symbols:
    I = 1
    V = 5
    X = 10
    L = 50
    C = 100
    D = 500
    M = 1000

    Logic:
    - If current value is smaller than next value,
      subtract it.
    - Otherwise, add it.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:

    // Function to convert Roman symbol to integer
    int value(char ch) {

        if(ch == 'I') return 1;
        if(ch == 'V') return 5;
        if(ch == 'X') return 10;
        if(ch == 'L') return 50;
        if(ch == 'C') return 100;
        if(ch == 'D') return 500;

        return 1000; // M
    }

    int romanToInt(string s) {

        int total = 0;

        for(int i = 0; i < s.length(); i++) {

            // If current value is smaller than next value
            // subtract current value
            if(i + 1 < s.length() &&
               value(s[i]) < value(s[i + 1])) {

                total -= value(s[i]);
            }
            else {
                total += value(s[i]);
            }
        }

        return total;
    }
};

int main() {

    Solution obj;

    string s = "MCMXCIV";

    cout << "Integer Value = "
         << obj.romanToInt(s);

    return 0;
}