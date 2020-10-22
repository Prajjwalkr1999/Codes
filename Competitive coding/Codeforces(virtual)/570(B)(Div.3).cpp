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
        cin >> n>>k;
        ll maxval=INT_MIN;
        ll minval=INT_MAX;
        vector<ll> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            maxval=max(maxval,a[i]);
            minval=min(minval,a[i]);
        }
        if(maxval-k==minval+k){
            cout<<minval+k<<"\n";
        }else{
            if(maxval-k>minval+k){
                cout<<-1<<"\n";
            }else{
                cout<<minval+k<<"\n";
            }
        }
    }
}

