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
        ll i, j=0, k, n, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        std::vector<ll> v(n);
        std::map<ll, ll> m;
        for ( i = 0; i < n; i++) {
            cin >> v[i];
            m[v[i]]++;
        }
        sort(v.begin(),v.end());

        for(i=0;i<n;i++){
            k=0;
            j=0;
           while(j<=5){
            k+=m[v[i]+j];
            j++;
           }
           if(k>ans){
            ans=k;
           }
        }
        cout<<ans<<"\n";

    }
}

