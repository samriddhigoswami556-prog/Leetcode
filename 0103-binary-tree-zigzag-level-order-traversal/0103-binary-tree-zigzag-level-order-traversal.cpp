/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        int level = 0;
        queue<TreeNode*> q;
        stack<int> s;
        q.push(root);
        while (q.size() > 0) {
            level++;
            int n = q.size();
            vector<int> v;
            for (int i = 0; i < n; i++) {
                TreeNode* curr = q.front();
                q.pop();
                if (level % 2 != 0) {
                    v.push_back(curr->val);
                } else {
                    s.push(curr->val);
                }
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }
            if (level % 2 == 0) {
                int x = s.size();
                for (int i = 0; i < x; i++) {
                    v.push_back(s.top());
                    s.pop();
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};