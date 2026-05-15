#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Problem Definition:
You are given an integer array 'height'.

Each element represents the height of a vertical line.
Two lines together with the x-axis form a container.

We need to find two lines such that:
- The container stores the maximum amount of water.

Formula:
Area = Width × Minimum Height

Where:
Width = distance between two lines
Height = smaller height among the two lines

Example:
Input:
height = [1,8,6,2,5,4,8,3,7]

Output:
49
Approach Used:
Two Pointer Technique
Time Complexity:
O(n)
Space Complexity:
O(1)

*/

class Solution {
public:

    int maxArea(vector<int>& height) {

        int maxWater = 0;

        int lp = 0;

        int rp = height.size() - 1;

        while (lp < rp) {

            int width = rp - lp;

            int ht = min(height[lp], height[rp]);

            int currWater = width * ht;

            maxWater = max(maxWater, currWater);

            if (height[lp] < height[rp]) {
                lp++;
            }
            else {
                rp--;
            }
        }

        return maxWater;
    }
};

int main() {

    Solution obj;

    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int result = obj.maxArea(height);

    cout << "Maximum Water Stored = " << result << endl;

    return 0;
}