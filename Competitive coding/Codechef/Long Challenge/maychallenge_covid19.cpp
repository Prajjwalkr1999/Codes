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
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        vector<ll> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll count=1;
        vector<ll> dis;
        for(i=0;i<n;i++){
            if(a[i+1]-a[i]<=2&&i<n-1){
                count++;
                continue;
            }
            dis.pb(count);
            count=1;
        }
        ll max=INT_MIN;
        ll min=INT_MAX;
        for(auto x:dis){
            if(max<x){
                max=x;
            }
            if(min>x){
                min=x;
            }
        }

        cout<<min<<" "<<max<<"\n";
    }
}

