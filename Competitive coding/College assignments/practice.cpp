#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;
void inorder(tree *root){
    if(root==NULL){
        return;
    }
    if(root->left) inorder(root->left);
    cout<<root->data;
    if(root->right) inorder(root->right);
}

void preorder(tree * root){
    if(!root) return;
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

void postorder(tree * root){
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

// INORDER TRAVERSAL OF CARTESIAN TREE
call(inorder,0,inorder.size()-1);

Treenode* construct(int inorder[],int start,int end){
    if(start==end){
        return new Treenode (inorder[start]);
    }
    if(start>end){
        return NULL;
    }
    int maxval=INT_MIN,maxidx=-1;
    for(int i=start;i<=end;i++){
        if(maxval<inorder[i]){
            maxval=inorder[i];
            maxidx=i;
        }
    }
    Treenode* root=new Treenode(maxval);
    root->left=construct(inorder,start,maxidx-1);
    root->right=construct(inorder,maxidx+1,end);

    return root;
}

int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    // int t;cin>>t;while(t--)
    {
        int i,j,n;
        cin >> n;
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }

        // RAIN WATER TRAPPED 

        // int left=0,right=n-1;
        // while(left<=right){
        //     if(a[left]<=a[right]){
        //         if(a[left]>maxleft){
        //             maxleft=a[left];
        //         }else{
        //             ans+=maxleft-a[left];
        //         }
        //         left++;
        //     }else{
        //         if(a[right]>maxright){
        //             maxright=a[right];
        //         }else{
        //             ans+=maxright-a[right];
        //         }
        //         right--;
        //     }
        // }

        // LARGEST HISTOGRAM RECTANGLE : 

        // st.push(0);
        // for(int i=1;i<n;i++){
        //     if(a[i]>a[s.top()]){
        //         st.push(i);
        //     }else{
        //         while(!st.empty()&&a[i]<a[st.top()]){
        //             int r=st.top();
        //             st.pop();
        //             int l=-1;
        //             if(!st.empty()){
        //                 l=st.top();
        //             }
        //             int val=a[r]*(i-l-1);
        //             ans=max(ans,val);
        //         }
        //         st.push(i);
        //     }
        // }
        
        // LARGEST MAXIMUM WINDOW : 

        // deque<int> q;
        // for(int i=0;i<k;i++){
        //     while(!q.empty()&&a[i]>=a[q.back()]){
        //         q.pop_back();
        //     }
        //     q.push_back(i);
        // }

        // for(int i=k;i<n;i++){
        //     ans[i-k]=a[q.front()];
        //     while(!q.empty()&&a[i]>=a[q.back()]){
        //         q.pop_back();
        //     }
        //     while(!q.empty()&&(i-k)>=q.front()){
        //         q.pop_front();
        //     }

        //     q.push_back(i);
        // }
        // ans[i-k]=a[q.front()];
        
        // INORDER TREE TRAVERSAL : 

        // stack<Node * > st;
        // st.push(root);

        // while(!st.empty()||cur!=NULL){
        //     while(cur!=NULL){
        //         st.push(cur);
        //         cur=cur->left;
        //     }
        //     cur=st.top();
        //     ans.pb(cur->data);
        //     st.pop();
        //     cur=cur->right;
        // }
        
        // PREORDER TREE TRAVERSAL : 

        // stack<node*> st;

        // while(!st.empty()){
        //     cur=st.top();
        //     ans.pb(cur->data);
        //     st.pop();
        //     if(root->right)
        //     st.push(root->right);
        //     if(root->left);
        //     st.push(root->left);
        // }

        // POSTORDER TREE TRAVERSAL : 

        // stack<node*> st,st2;

        // while(!st.empty()){
        //     cur=st.top();
        //     st2.push(cur);
        //     st.pop();
        //     if(root->left);
        //     st.push(root->left);
        //     if(root->right)
        //     st.push(root->right);
        // }
        // while(!st2.empty()){
        //     cout<<st2.top()->data;
        //     st2.pop();
        // }

        // RECOVER BST : 

        // void swap(Tree* root,Tree* &prev,Tree* &first,Tree* &second){
        //     if(!root) return;

        //     swap(root->left,prev,first,second);

        //     if(prev!=NULL&&root->val<prev->val){
        //         if(!first) first=prev;
        //         second=root;
        //     }
        //     prev=root;

        //     swap(root->right,prev,first,second);
        // }

        // cout<<first<<second;
    

    }
    
    return 0;
}

