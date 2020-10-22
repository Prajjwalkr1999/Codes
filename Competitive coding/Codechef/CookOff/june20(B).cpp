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
        int i,j,n,m;
        cin >> n>>m;
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }

        // sort(a.begin(), a.end());
        map<int,int> vis;
        int cnt=0,ans=0;
        for(i=0;i<n;i++){
            if(a[i]<m&&vis[a[i]]==0){
                vis[a[i]]++;
                cnt++;
            }
            if(a[i]==m){
                ans-=1;
            }
        }
        if(cnt!=m-1){
            cout<<-1<<"\n";
            continue;
        }

        ans+=n;
        cout<<ans<<'\n';

    }
    return 0;
}

