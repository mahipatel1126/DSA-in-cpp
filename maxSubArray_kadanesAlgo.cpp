#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = INT_MIN;

        for (int val : nums) {
            currSum += val;
            maxSum = max(maxSum, currSum);

            if (currSum < 0) {
                currSum = 0;
            }
        }
        return maxSum;
    }
};

int main() {
    int n;
    cin >> n;              // size of array

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];    // array elements
    }

    Solution sol;
    cout << sol.maxSubArray(nums) << endl;

    return 0;
}

