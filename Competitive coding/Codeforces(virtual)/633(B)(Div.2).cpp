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
        vector<int> b(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            b[i]=a[i];
        }

        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        i=0;
        vector<int> ans;
        int cnt=0;
        while(i<n){
            if(cnt==n){
                break;
            }
            if(cnt!=n){           
                ans.pb(a[i]);
                cnt++;
            }
            if(cnt!=n){
                ans.pb(b[i]);
                cnt++;
            }
            i++;
        }

        for(i=n-1;i>=0;i--){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}

