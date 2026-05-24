/*
REMOVE ELEMENT - C++ SOLUTION

Problem Definition:
Given an integer array nums and an integer val,
remove all occurrences of val in-place.

The order of the remaining elements may be changed.
Return the number of elements that are not equal to val.

The first k elements of nums should contain the
elements which are not equal to val.

Example 1:
Input:
nums = [3,2,2,3]
val = 3

Output:
2

Modified Array:
[2,2,_,_]

Example 2:
Input:
nums = [0,1,2,2,3,0,4,2]
val = 2

Output:
5

Modified Array:
[0,1,3,0,4,_,_,_]

Approach:
1. Create a variable k = 0.
2. Traverse the array.
3. If nums[i] is not equal to val:
   - Store nums[i] at index k
   - Increment k
4. Return k.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int k = obj.removeElement(nums, val);

    cout << "Number of elements after removal: " << k << endl;

    cout << "Modified array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}