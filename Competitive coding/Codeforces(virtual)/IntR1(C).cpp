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
        map<int,vector<int>> mp;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]].pb(i);
        }
        int ans=0;
        for(i=0;i<n;i++){
            for(j=i+2;j<n;j++){
                int x=a[i]+a[j];
                if(x%2==0)
                    x/=2;
                else continue;
                if(mp.find(x)!=mp.end()){
                    int y=upper_bound(mp[x].begin(),mp[x].end(),i)-mp[x].begin();
                    int q=lower_bound(mp[x].begin(),mp[x].end(),j-1)-mp[x].begin();
                    int z=-1;
                    if(y>=0&&y<mp[x].size())
                     z=mp[x][y];
                    int val=-1;
                    if(q>=0&&q<mp[x].size())
                           val=mp[x][q];
                    if(z>i&&z<j&&z>0&&z<n){
                    // cout<<j-1<<" "<<z<<" "<<val<<endl;
                        if(val!=z&&val>i&&val>0&&val<j&&val<n)
                        ans+=(val-z)+1;
                        else ans++;
                        // i=j;
                        // break;
                    }
                }
            }
        }

        cout<<ans<<endl;



    }
    return 0;
}

