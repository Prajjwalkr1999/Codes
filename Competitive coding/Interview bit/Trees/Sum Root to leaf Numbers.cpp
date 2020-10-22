void path(TreeNode* a,int sum,int mod){
    if(!a){
        return 0;
    }
    if(!a->left&&!a->right){
        return sum%mod;
    }
    sum=((sum%mod*10)%mod+(a->val)%mod)%mod;
    int x=0,y=0;
    if(a->left){
        x=path(a->left,sum,mod)%mod;
    }
    if(a->right){
        y=path(a->right,sum,mod)%mod;
    }
    return (x+y)%mod;
}
