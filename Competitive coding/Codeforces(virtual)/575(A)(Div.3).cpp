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
        ll i, j, k, n, m, cnt = 0, sum = 0;
        cin >> n>>k;
        vector<ll> a(n);
        vector<ll> ans;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            if((a[i]%2)!=0){
                cnt++;
                ans.pb(i+1);
            }
        }

        if((cnt+k)%2==0&&cnt>=k){
            cout<<"YES\n";
            for(i=0;i<k-1;i++){
                cout<<ans[i]<<" ";
            }
            cout<<n<<"\n";
        }else{
            cout<<"NO\n";
        }

    }
}

