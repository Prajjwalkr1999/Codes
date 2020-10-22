// TLE came somehow.
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//  int idxp=0;
 TreeNode* solve(vector<int> in,vector<int> pre,int idx,int m,int &idxp){
    // if(idx==in.size()||idxp==pre.size()){
    //     return NULL;
    // }
    if(idx>m) return NULL;
    
     TreeNode* head=new TreeNode(pre[idxp++]);
     
    if(idx==m){
        return head;
    }
    int val=head->val,x;
    for(int i=idx;i<=m;i++){
        if(val==in[i]){
            x=i;
            break;
        }
    }
    // TreeNode* head=new TreeNode(in[x]);
    head->left=solve(in,pre,idx,x-1,idxp);
    head->right=solve(in,pre,x+1,m,idxp);

    return head;


}
TreeNode* Solution::buildTree(vector<int> &pre, vector<int> &in) {

    int n=pre.size(),m=in.size();
    int idxp=0;
    TreeNode* head=solve(in,pre,0,m-1,idxp);
    return head;
}
