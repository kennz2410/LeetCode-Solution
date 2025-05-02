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
    int recursive(TreeNode* root, int& result) {
        if(!root) return 0;

        int l = max(recursive(root->left, result), 0);
        int r = max(recursive(root->right, result), 0);

        result = max(result, root->val + l + r);

        return root->val + max(l, r);

    };

    int maxPathSum(TreeNode* root) {
        int res = root->val;
        recursive(root, res);
        return res;        
    }
};