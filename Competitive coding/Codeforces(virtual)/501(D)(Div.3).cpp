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
    
    // ll t;cin>>t;while(t--)
    {
        ll i, j, k,s, n, m, cnt = 0, sum = 0;
        cin >> n>>k>>s;

        if(k>s||(s)>(n-1)*k){
            cout<<"NO\n";
            return 0;
        }
        ll jump=s/k;
        ll rem=s%k;
        vector<ll> ans(k+1,jump);
        for(i=0;i<rem;i++){
            ans[i]+=1;
        }

        ll x=ans[0]+1;
        vector<ll> final;
        for(i=1;i<k+1;i++){
            final.pb(x);
            if(i%2){
                x-=ans[i];
            }else{
                x+=ans[i];
            }
        }
        cout<<"YES\n";
        for(auto x:final){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}

