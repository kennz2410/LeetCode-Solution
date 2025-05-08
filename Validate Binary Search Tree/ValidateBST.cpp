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

// class Solution {
// public:
//     bool isValidBST(TreeNode* root) {
//         int prevVal = INT_MIN;
//         TreeNode* prev = nullptr;
//         TreeNode* curr = root;
        
//         while(curr != nullptr) {
//             if(curr->left == nullptr) {

//                 if(curr->val <= prevVal) {
//                     return false;
//                 }

//                 prevVal = curr->val;
//                 curr = curr->right;
//             } else {
//                 prev = curr->left;
//                 while(prev->right != nullptr && prev->right != curr) {
//                     prev = prev->right;
//                 }

//                 if(prev->right == nullptr) {
//                     prev->right = curr;
//                     curr = curr->left;
//                 } else {
//                     prev->right = nullptr;

//                     if(curr->val <= prevVal) {
//                         return false;
//                     }

//                     prevVal = curr->val;
//                     curr = curr->right;
//                 }
//             } 
//         }

//         return true;
//     }
// };

class Solution {
public:
    bool inOrder(TreeNode* root, long& prev) {
        if(!root) return true;
        
        if(!inOrder(root->left, prev)) {
            return false;
        }
        
        if(prev >= root->val) {
            return false;
        }
        
        prev = root->val;
        
        return inOrder(root->right, prev);
    }

    bool isValidBST(TreeNode* root) {
        long prev = LONG_MIN; 
        return inOrder(root, prev);
    }
};