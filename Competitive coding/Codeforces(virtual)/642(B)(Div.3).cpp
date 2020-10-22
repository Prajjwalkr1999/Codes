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
        vector<ll> a(n);
        vector<ll> b(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        for ( i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());
        
        for(i=0;i<n;i++){
            if(a[i]<b[i]&&k>0){
                swap(a[i],b[i]);
                k--;
            }
            if(k==0){
                break;
            }
        }
        for(auto x:a){
            sum+=x;
        }
        cout<<sum<<"\n";
    }
}

