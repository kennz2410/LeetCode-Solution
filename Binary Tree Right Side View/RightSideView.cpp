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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
                
        if(!root) return result;

        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();

            for(int i = 0; i < size; ++i) {
                TreeNode* newNode = q.front(); q.pop();

                if(i == 0) {
                    result.push_back(newNode->val);
                }

                if(newNode->right) {
                    q.push(newNode->right);
                }

                if(newNode->left) {
                    q.push(newNode->left);
                }
            }
        }     

        return result;
    }
};