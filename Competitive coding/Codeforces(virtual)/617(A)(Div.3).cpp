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
        ll i, j, k, n, m, ans = 0, cnte = 0, cnto = 0;
        cin >> n;
        ll a[n];
        for ( i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]%2==0){
                cnte++;
            }else{
                cnto++;
            }
        }

        if(cnte==n){
            cout<<"NO\n";
            continue;
        }
        if(cnto==n && n%2==0){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";


    }
}

