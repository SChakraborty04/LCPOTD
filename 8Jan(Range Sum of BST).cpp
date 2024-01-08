//Problem: https://leetcode.com/problems/range-sum-of-bst/description/?envType=daily-question&envId=2024-01-08

int rangeSumBST(TreeNode* root, int low, int high){
        int ans = 0;
        function<void(TreeNode *)> traverse = [&](TreeNode * node) {
            if(!node)
                return;
            if(node -> val >= low && node -> val <= high){
                ans+=node->val;
                traverse(node->left);
                traverse(node->right);
            }
            if(node->val<low)
            traverse(node->right);
            if(node->val>high)
            traverse(node->left);
        };
        traverse(root);
        return ans;
    }
