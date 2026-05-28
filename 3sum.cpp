/*
Problem Definition

Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that:

i != j
i != k
j != k
nums[i] + nums[j] + nums[k] == 0

The solution set must not contain duplicate triplets.

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();

        vector<vector<int>> ans;

        // Sort the array
        sort(nums.begin(), nums.end());

        // Fix first element
        for(int i = 0; i < n; i++) {

            // Skip duplicate elements
            if(i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int j = i + 1;
            int k = n - 1;

            // Two pointer approach
            while(j < k) {

                int sum = nums[i] + nums[j] + nums[k];

                if(sum < 0) {
                    j++;
                }
                else if(sum > 0) {
                    k--;
                }
                else {

                    ans.push_back({nums[i], nums[j], nums[k]});

                    j++;
                    k--;

                    // Skip duplicates
                    while(j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }

                    while(j < k && nums[k] == nums[k + 1]) {
                        k--;
                    }
                }
            }
        }

        return ans;
    }
};

int main() {

    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    Solution obj;

    vector<vector<int>> result = obj.threeSum(nums);

    cout << "Triplets are:" << endl;

    for(auto triplet : result) {

        cout << "[ ";

        for(int num : triplet) {
            cout << num << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}