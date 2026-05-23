/*
    problem:Check if Array Is Sorted and Rotated
    
    Given an array nums, return true if the array was originally sorted
    in non-decreasing order, then rotated some number of positions.
    Otherwise, return false.

    Approach:
    - Count how many times the order breaks.
    - A break occurs when:
            nums[i] > nums[(i + 1) % n]

    - In a valid sorted & rotated array,
      the break count can be at most 1.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {

        int count = 0;
        int n = nums.size();

        // Traverse the array
        for (int i = 0; i < n; i++) {

            // Compare current element with next element
            // (i + 1) % n helps compare last element with first
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        // Valid only if break count is 0 or 1
        return count <= 1;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {3, 4, 5, 1, 2};

    if (obj.check(nums)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}