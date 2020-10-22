//Did it myself.
//Swap two stacks: one.swap(second);
stack<TreeNode*> curr;
stack<TrreNode*> nxt;
vector<vector<int>> ans;
vector<int> lvl;
curr.push(root);
bool flag=true;
while(!curr.empty()){
    TreeNode* temp=curr.top();
    curr.pop();
    lvl.push_back(temp->val);
    if(flag){
        if(temp->right) nxt.push(temp->right);
        if(temp->left) nxt.push(temp->left); 
    }else{
        if(temp->left){
            nxt.push(temp->left);
        }
        if(temp->right){
            nxt.push(temp->right);
        }
    }

    if(curr.empty()){
        ans.push_back(lvl);
        lvl.clear();
        flag=!flag;
        curr.swap(nxt);
    }
}