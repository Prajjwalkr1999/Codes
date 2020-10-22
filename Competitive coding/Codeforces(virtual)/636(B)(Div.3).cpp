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
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0,sumo=0;
        cin >> n;
        if(n%4==0){
        cout<<"YES\n";
        vector<ll> a;
        ll even=2,odd=1;
        for ( i = 0; i < n/2; i++) {
            a.pb(even);
            sum+=even;
            even+=2;
        }
        for(i=0;i<n/2-1;i++){
            a.pb(odd);
            sumo+=odd;
            odd+=2;
        }
        cnt=sum-sumo;
        a.pb(cnt);
        for(auto x:a){
            cout<<x<<" ";
        }
        cout<<"\n";

        }else{
            cout<<"NO\n";
        }

    }
}

