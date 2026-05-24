/*
Problem: Plus One

You are given an integer array digits representing a large integer.
Increment the integer by one and return the resulting array.

Example:
Input:  [1,2,3]
Output: [1,2,4]
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for(int i = digits.size() - 1; i >= 0; i--) {

            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);

        return digits;
    }
};

int main() {

    Solution obj;

    vector<int> digits = {1,2,9};

    vector<int> result = obj.plusOne(digits);

    cout << "Output: ";

    for(int num : result) {
        cout << num << " ";
    }

    return 0;
}