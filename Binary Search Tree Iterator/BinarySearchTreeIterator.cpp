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

class BSTIterator {
private:
    stack<TreeNode*> st;

public:
    BSTIterator(TreeNode* root) {
        TreeNode* curr = root;
        while(curr) {
            st.push(curr);
            curr = curr->left;
        }
    }
        
    int next() {
        TreeNode* val = st.top();
        st.pop();
        if(val->right) {
            while(val->right) {
                st.push(val->right);
                val->right = val->right->left;
            }
        }   
        
        return val->val;
    }
        
    bool hasNext() {
        return !st.empty();    
    }
};

int main() {

}