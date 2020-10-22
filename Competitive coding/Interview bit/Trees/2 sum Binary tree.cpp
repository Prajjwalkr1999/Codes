int check(TreeNode* root,int k){
    stack<TreeNode*> st1;
    stack<TreeNode*> st2;
    TreeNode* curr1=root;
    TreeNode* curr2=root;
    int flag1=1,flag2=1,val1,val2;
    while(1){
        while(flag1){
            while(curr1){
                st1.push(curr1);
                curr1=curr1->left;
            }
            TreeNode* head=st1.top(); 
            val1=head->val;
            st1.pop();
            if(head->right) curr1=head->right;
            flag1=0;
        }
        while(flag2){
            while(curr2){
                st2.push(curr2);
                curr2=curr2->right;
            }
            TreeNode* head=st2.top();
            val2=head->val;
            st2.top();
            if(head->left) curr2=head->left;
            flag2=0;
        }
        if(val1!=val2&&(val1+val2)==k){
            return 1;
        }else if((val1+val2)<k){
            flag1=1;
        }else if((val1+val2)>k){
            flag2=1;
        }
        if(val1>=val2){
            return 0;
        }
    }
}