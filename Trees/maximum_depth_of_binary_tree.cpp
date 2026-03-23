#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Problem: Maximum Depth of Binary Tree
// Approach: Recursion
// Time Complexity: O(n)
// Space Complexity: O(h)

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        return max(left, right) + 1;
    }
};
