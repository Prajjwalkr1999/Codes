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
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.rbegin(),a.rend());
        int cur=a[0];
        vector<int> ans;
        ans.pb(cur);
        vector<int> vis(n,0);
        int maxm=0,idx=0;
        vis[0]++;
        for(i=1;i<n;i++){
            maxm=0;
            idx=0;
            maxm=0;
            int x=0;
            for(j=1;j<n;j++){
                if(!vis[j]){
                    int val=__gcd(cur,a[j]);
                    // cout<<cur<<" "<<a[j]<<" "<<val<<"\n";
                    if(maxm<val){
                        maxm=val;
                        x=a[j];
                        idx=j;
                    }
                }
            }
            cur=__gcd(cur,x);
            ans.pb(x);
            vis[idx]++;
        }

        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}

