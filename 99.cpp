 void inorder(TreeNode* root, vector<int>& in) {
        if (!root) return;
        inorder(root->left, in);
        in.push_back(root->val);
        inorder(root->right, in);
    }

    void recover(TreeNode* root, vector<int>& sorted, int& index) {
        if (!root) return;
        recover(root->left, sorted, index);
        root->val = sorted[index++];
        recover(root->right, sorted, index);
    }

    void recoverTree(TreeNode* root) {
        vector<int> in;
        inorder(root, in);
        sort(in.begin(), in.end());
        int i = 0;
        recover(root, in, i);
    }