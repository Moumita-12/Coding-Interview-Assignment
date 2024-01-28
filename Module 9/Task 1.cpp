 int height(node* root) {
        if(root == NULL) return 0;

        int h1 = height(root -> left);
        int h2 = height(root -> right);

        return max(h1, h2)+1;
    }

// time complexity : O(number of nodes in the tree)
// space complexity : O(height)


