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
    
    ll t;cin>>t;while(t--){
        // cout<<t<<endl;

        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;

        std::vector<ll> a(n);
        map<ll,ll> mp;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }

        if(n==1){
            cout<<"YES\n";
            continue;
        }

        for(i=0;i<n-1;i++){
            mp[abs(a[i+1]-a[i])]++;
        }
        // mp[(a[n-1]-a[0])]++;

        if(mp.size()>2){
            cout<<"NO\n";
            continue;
        }

        if(mp.size()==2){
            if((mp[n-1]==1)&&(mp[1]==n-2)){
                cout<<"YES\n";
                continue;
            }else{
                cout<<"NO\n";
                continue;
            }
        }else{
            if(mp[1]==n-1){
                cout<<"YES\n";
                continue;
            }else{
                cout<<"NO\n";
                continue;
            }
        }
    }
}


