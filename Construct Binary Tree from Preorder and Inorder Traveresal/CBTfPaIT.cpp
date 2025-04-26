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
    TreeNode* recursive(unordered_map<int, int>& mp, vector<int>& preorder, int& preIndex, int left, int right) {
        if(left > right) return nullptr;

        int rootVal = preorder[preIndex];
        preIndex++;

        int index = mp[rootVal];
        TreeNode* root =  new TreeNode(rootVal);

        root->left = recursive(mp, preorder, preIndex, left, index - 1);
        root->right = recursive(mp, preorder, preIndex, index + 1, right);

        return root;

    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> mp;

        for(int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }

        int preIndex = 0;
        TreeNode* root = recursive(mp, preorder, preIndex, 0, inorder.size() - 1);

        return root;
    }


};

int main() {

}