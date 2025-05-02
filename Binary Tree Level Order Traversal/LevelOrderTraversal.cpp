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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        
        if(!root) return result;

        queue<TreeNode*> q;
        q.push(root);
        int currLevel = 0;
        while(!q.empty()) {
            int size = q.size();
            result.push_back(vector<int>());

            for(int i = 0; i < size; i++) {
                TreeNode* newNode = q.front(); q.pop();

                result[currLevel].push_back(newNode->val);

                if(newNode->left) {
                    q.push(newNode->left);
                }

                if(newNode->right) {
                    q.push(newNode->right);
                }
            }

            currLevel++;
        }

        return result;
    }
};