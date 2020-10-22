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
        ll i, j, k, n, ans = 0, cnt = 0, sum = 0;
        cin >>n>>k;
        vector<ll> a(n);
        map<ll,ll> m;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]%k]++;
        }
        // for(auto x:m){
        //     cout<<x.F<<" "<<x.S<<endl;
        // }
        if(m.find(0)!=m.end()){
            ans+=m[0]/2;
        }
        if(k%2==0&&m.find(k/2)!=m.end()){
            ans+=m[k/2]/2;
        }
        for(i=1;i<(k+1)/2;i++){
            ll x=m[i];
            ll y=m[k-i];
            // cout<<x<<" "<<y<<endl;
            if(x!=0&&y!=0){
                ll z=min(x,y);
                ans+=z;
            }
        }
        cout<<ans*2<<"\n";
    }
}

