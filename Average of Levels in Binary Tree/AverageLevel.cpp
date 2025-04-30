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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        if(!root) return result;

        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            double sum = 0;

            for(int i = 0; i < size; i++) {
                TreeNode* val = q.front();
                q.pop();

                sum += static_cast<double>(val->val);

                if(val->left) q.push(val->left);
                if(val->right) q.push(val->right);
            }

            result.push_back(sum / size);
        }

        return result;
    }
};