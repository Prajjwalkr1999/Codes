#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = INT_MAX, cnt = 0, sum = 0;
        string s;
        cin>>s;
        n=s.size();
        vector<ll> vis(4);
        set<char> st;
        for(auto x:s){
            st.insert(x);
        }
        if(st.size()<3){
            cout<<0<<"\n";
            continue;
        }
        vector<vector<ll>> v(4);
        for(i=0;i<n;i++){
            if(s[i]!=s[i-1]&&i!=0)
            v[s[i]-'0'].pb(i);

        }
        // while(sum<s.size()){
        for(i=1;i<=3;i++){
            for(auto x:v[i]){
            i=x;
            vis[s[i]-'0']++;
            for(j=i+1;j<n&&i<n-2;j++){
                if(s[j]==s[i]){
                    i++;
                }
                if(s[j]=='1'&&vis[1]==0){
                    vis[1]++;
                }
                if(s[j]=='2'&&vis[2]==0){
                    vis[2]++;
                }
                if(s[j]=='3'&&vis[3]==0){
                    vis[3]++;
                }
                if(vis[1]!=0&&vis[2]!=0&&vis[3]!=0){
                    cnt=j;
                    break;
                }
            }
        // ans=j-i+1;
        ans=min(ans,(j-i+1));
        }
        }
            // sum=j;
        // }
        cout<<ans<<"\n";
    }
}

