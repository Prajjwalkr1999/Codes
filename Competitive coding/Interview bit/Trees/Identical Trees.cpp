//Tree nhbi aata
//Recursion bilkul nhi aati

int check(TreeNode* a,TreeNode* b){
    if(!a||!b){
        return a==b;
    }
    if(a->val!=b->val){
        return 0;
    }
    int x=0,y=0;
    // if(a->left&&b->left)
        x=check(a->left,b->left);

    // if(a->right&&b->right)
        y=check(a->right,b->right);

    return x&&y;
}
