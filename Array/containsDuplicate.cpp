#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for (int num : nums) {
            if (s.count(num)) {
                return true;   // duplicate found
            }
            s.insert(num);
        }

        return false;  // no duplicates
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1,2,3,1};

    if (obj.containsDuplicate(nums))
        cout << "true";
    else
        cout << "false";

    return 0;
}