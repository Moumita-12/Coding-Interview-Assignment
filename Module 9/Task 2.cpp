 node* searchBST(node* root, int val) {
        if(!root)  return 0;

        if(val > root->val){
            return searchBST(root->right, val);
        }
        else if(val < root->val){
            return searchBST(root->left, val);
        }
        else{
            return root;
        }
    }
//time complexity  : O(logn) , in worst case O(n)
//space complexity  : O(1)
