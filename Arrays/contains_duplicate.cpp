#include <bits/stdc++.h>
using namespace std;

// Problem: Contains Duplicate
// Platform: LeetCode
// Approach: Use unordered_set to check repetition
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for (int num : nums) {
            if (st.find(num) != st.end()) {
                return true;
            }
            st.insert(num);
        }

        return false;
    }
};
