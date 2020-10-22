#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;
vector<string> v;
string s;
bool dfs(int i,int j,int idx){
    if(idx==s.size()){
        return 1;
    }
    if(i>=v.size()||i<0||j>=v[i].size()||j<0){
        return 0;
    }
    if(s[idx]!=v[i][j]){
        return 0;
    }
    int ans1=0,ans2=0,ans3=0,ans4=0;
    if(s[idx]==v[i][j]){
        ans1=dfs(i-1,j,idx+1);
        ans2=dfs(i+1,j,idx+1);
        ans3=dfs(i,j-1,idx+1);
        ans4=dfs(i,j+1,idx+1);
    }
    int ans=(ans1||ans2||ans3||ans4);
    // cout<<ans<<"\n";
    return (ans1||ans2||ans3||ans4);
}
int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
        int i,j,n,ans=0;
        cin >> n;
        vector<string> a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
    int t;cin>>t;while(t--)
    {
        ans=0;
        string x;
        cin>>x;
        v=a;
        s=x;
        // cout<<s<<endl;
        for(i=0;i<n;i++){
            for(j=0;j<v[i].size();j++){
                if(v[i][j]==s[0]){
                    ans=dfs(i,j,0);
                    if(ans){
                        break;
                    }
                }
            }
            if(ans){
                break;
            }
        }
        cout<<ans<<"\n";
        cout<<endl;
    }
    return 0;
}

