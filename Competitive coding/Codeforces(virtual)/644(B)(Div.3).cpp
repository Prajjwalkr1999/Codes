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
        ll i, j, k, n, m, ans = 0, cnt = 0, min = INT_MAX;
        cin >> n;
        vector<ll> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for(i=0;i<n-1;i++){
            if(min>(a[i+1]-a[i])){
                min=(a[i+1]-a[i]);
            }
        }
        cout<<min<<"\n";
    }
}

