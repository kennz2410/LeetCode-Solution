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
    TreeNode* recursive(unordered_map<int, int>& mp, vector<int>& postOrder, int& postIndex, int start, int end) {
        if(start > end) return nullptr;

        int curr = postOrder[postIndex];
        TreeNode* newNode = new TreeNode(curr);
        postIndex--;

        if(start == end) return newNode;

        int index = mp[curr];

        newNode->right = recursive(mp, postOrder, postIndex, index + 1, end);
        newNode->left = recursive(mp, postOrder, postIndex, start, index -1);

        return newNode;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> mp;
    
        for(int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }

        int postIndex = inorder.size() - 1;

        return recursive(mp, postorder, postIndex, 0, inorder.size() - 1);

    }
};