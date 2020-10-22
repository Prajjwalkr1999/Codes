 #include <bits/stdc++.h> 
using namespace std;
int dp[1000][1000]; 
int check(string x,int i,string y,int j,int gap,int mis){
    if(i>=x.size()&&j>=y.size()){
        return 0;
    }
    if(i>=x.size()){
        int ans=(y.size()-j)*gap;
        return ans;
    }
    if(j>=y.size()){
        int ans=(x.size()-i)*gap;
        return ans;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(x[i]==y[j]){
        cout<<x[i]<<" "<<y[j]<<endl;
        dp[i][j]=check(x,i+1,y,j+1,gap,mis);
        return dp[i][j];
    }else{
        int ans1=check(x,i+1,y,j+1,gap,mis);
        int ans2=check(x,i,y,j+1,gap,mis);
        int ans3=check(x,i+1,y,j,gap,mis);
        int ans=min(min(2*gap,mis)+ans1,min(gap+ans2,gap+ans3));
        dp[i][j]=ans;
        return dp[i][j];
    }
}
int getMinimumPenalty(string x,string y,int pgap,int pxy)  // x and y are given input strings. pgap and pxy are given mismatch scores.
{
    int res=0;
    
    // WRITE YOUR CODE HERE
    memset(dp,-1,sizeof(dp));
    res=check(x,0,y,0,pgap,pxy);
    return res;
}

int main()
{
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
    
    
        #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
    string gene1,gene2;
    int gapPenalty,misMatchPenalty;
    cin>>gene1>>gene2;
    cin>>gapPenalty;
    cin>>misMatchPenalty;
    cout<<getMinimumPenalty(gene1, gene2, gapPenalty, misMatchPenalty);
}