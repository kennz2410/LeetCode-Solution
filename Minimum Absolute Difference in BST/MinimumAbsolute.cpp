#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void inOrder(TreeNode* root, TreeNode*& prev, int& result) {
        if(!root) {
            return;
        }

        inOrder(root->left, prev, result);

        if(prev != nullptr) {
            result = min(result, abs(root->val - prev->val));
        }

        prev = root;

        inOrder(root->right, prev, result);

    }
    int getMinimumDifference(TreeNode* root) {
        int result = INT_MAX;
        TreeNode* prev = nullptr;
        inOrder(root, prev, result);

        return result;
    }
};