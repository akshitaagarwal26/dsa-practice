#include <bits/stdc++.h>
using namespace std;

// Problem: Valid Anagram
// Approach: Frequency count
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        vector<int> count(26, 0);

        for (char c : s) count[c - 'a']++;
        for (char c : t) count[c - 'a']--;

        for (int i : count) {
            if (i != 0) return false;
        }

        return true;
    }
};
