#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;


int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int t;cin>>t;while(t--)
    {
        int i,j,n;
        cin >> n;
        string s;
        cin>>s;
        int flag1=0,flag2=0,cycle=0,ans=0;
        vector<int> vis(n,0);
        for(int i=0;i<n;i++){
            if(s[i]=='>'){
                flag1++;
                continue;
            }
            if(s[i]=='<'){
                flag2++;
                continue;
            }
            if(s[i]=='-'){
                vis[i]++;
                vis[(i+1)%n]++;
                continue;
            }
        }
        for(int i=0;i<n;i++){
            if(vis[i]!=0){
                ans++;
            }
        }
        if(flag1>0&&flag2>0){
            cycle++;
        }
        if(cycle==0 || ans==n){
            cout<<n<<"\n";
        }else if(ans>0){
            cout<<ans<<'\n';
        }else{
            cout<<0<<"\n";
        }

    }
    return 0;
}

