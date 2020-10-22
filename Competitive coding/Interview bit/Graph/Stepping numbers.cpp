vector<int> solve(int n,m,i){
    vector<int> ans;
    ans.push_back(0);
    for(int i=1;i<=9;i++){
        queue<int> q;
        q.push(i);
        while(!q.empty()){
            int num=q.front();
            q.pop();
            if(num>=n&&num<=m){
                ans.push_back(num);
            }
            if(num==0||num>m){
                continue;
            }
            int last=num%10;
            int nxt;
            if(last==0){
                nxt=num*10+1;
                q.push(nxt);
            }else if(last==9){
                nxt=num*10+8;
                q.push(nxt);
            }else{
                nxt=num*10+last-1;
                q.push(nxt);
                nxt=num*10+last+1;
                q.push(nxt);
            }
        }
    }
    return ans;
}