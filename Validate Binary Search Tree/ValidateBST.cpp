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
    void inOrder(TreeNode* root, TreeNode*& prev, bool status) {
        if(!root) return;

        inOrder(root->left, prev, status);

        if(prev != nullptr && root->val > prev->val ) {
            status = false;
            return;
        }
        
        prev = root;

        inOrder(root->right, prev, status);
    }

    bool isValidBST(TreeNode* root) {
        bool status = true;
        TreeNode* prev = nullptr;

        inOrder(root, prev, status);

        return status;
    }
};