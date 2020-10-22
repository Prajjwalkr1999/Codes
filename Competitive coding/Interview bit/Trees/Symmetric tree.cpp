// Did it myself.
int check(TreeNode* head1,TreeNode* head2){
    if(!head1&&!head2){
        return 1;
    }
    if(!head1||!head2){
        return 0;
    }
    if(head1->val!=head2->val ){
        return 0;
    }
    int ans1=check(head1->left,head2->right);
    int ans2=check(head1->right,head2->left);

    return ans1&&ans2;
}