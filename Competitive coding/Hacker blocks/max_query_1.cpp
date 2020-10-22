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
    ll n;
    cin >> n;
        ll a[n];
        for ( ll i = 0; i < n; i++) {
            cin >> a[i];
        }
    ll t;cin>>t;
    while(t--)
    {
        ll l, r, k, m, ans = 0, cnt = 0, sum = 0;
        cin>>l>>r>>k;
        for(ll i=l-1;i<=r-1;i++){
            if((a[i]>=k)){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}

