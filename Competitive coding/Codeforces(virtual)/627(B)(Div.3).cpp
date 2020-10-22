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
        ll i, j, k, n, m, ans = 0, cnt = 0, flag = 0;
        cin >> n;
        vector<P> a(n);
        std::map<ll, ll> mp;
        for ( i = 0; i < n; i++) {
            cin >> a[i].F;
            a[i].S=i;
            mp[a[i].F]++;
        }
        for(auto x:mp){
            if(x.S>=3){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"YES\n";
            continue;
        }
        sort(a.begin(),a.end());

        for(i=0;i<n-1;i++){
            if(a[i+1].F==a[i].F){
                if(a[i+1].S>(a[i].S+1)){
                    flag=1;
                    break;
                    }
            }
        }
        if(flag==1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }
}

