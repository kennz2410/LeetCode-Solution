#include <iostream>
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
    int dfs(TreeNode* root, int val) { 
        if (!root) return 0;

        val = val * 10 + root->val; 
        
        if (!root->left && !root->right) {
            return val;
        }

        return dfs(root->left, val) + dfs(root->right, val);
    }

    int sumNumbers(TreeNode* root) {
        return dfs(root, 0);
    }
};

int main()  { 
    // Hard coded binary tree.
    //          6
    //        /  \
    //       3    5
    //     /  \    \
    //    2   5     4  
    //       / \
    //      7   4
    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(3);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(4);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);
    
    Solution s;
    cout << s.sumNumbers(root) << endl;
    
    return 0; 
}
