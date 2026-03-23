#include <bits/stdc++.h>
using namespace std;

// Problem: Move Zeroes
// Platform: LeetCode
// Approach: Two-pointer method
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[index], nums[i]);
                index++;
            }
        }
    }
};
