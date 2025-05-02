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
    void inOrder(TreeNode* root, int target, int& count, int& result) {
        if(!root || result != -1) return;

        inOrder(root->left, target, count, result);

        if(result != -1) return;

        count++;

        if(count == target) {
            result = root->val;
            return;
        }

        inOrder(root->right, target, count, result);

    }

    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        int result = -1;
        inOrder(root, k, count, result);
        
        return result;
    }
};