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
        vector<int> idx(n+1);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            idx[a[i]]=i;
        }
        int ans=n,cnt=0;
        for(i=n;i>=1;i--){
            if(idx[i]>cnt){
                if(ans<idx[i])
                    idx[i]-=cnt+1;
                ans-=idx[i];
                // cout<<ans<<"\n";
                cnt=idx[i]-1;
            }
            if(ans==1){
                break;
            }
        }
        if(ans==1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }
    return 0;
}

