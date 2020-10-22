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
        sort(a.begin(), a.end());
        cnt=1;
        ll size=n;
        vector<ll> vis(n,0);
        for(i=0;i<n;i++){
            if(a[i]<=cnt){
                cnt++;
                vis[i]++;
                size--;
            }
        }
        for(i=n-1;i>=0;i--){
            if(a[i]<=cnt+size-1){
                cnt+=size;
                break;
            }
            size--;
        }
        cout<<cnt<<"\n";

    }
}

