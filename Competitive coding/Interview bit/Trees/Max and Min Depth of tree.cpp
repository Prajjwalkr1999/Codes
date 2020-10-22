int sum(TreeNode* a){
    if(!a){
     return 0;
    }

    if(a->left){
        int x=sum(a->left);
    }
    if(a->right){
        int y=sum(a->right);
    }
    return max(x+1,y+1);
}

int minm(TreeNode* a){
    if(!a){
        return 0;
    }
    if(!a->left&&!a->right){
        return 1;
    }
    int x=INT_MAX,y=INT_MAX;
    if(a->left){
        x=minm(a->left);
    }
    if(a->right){
        y=minm(a->right);
    }
    return min(x+1,y+1);
}