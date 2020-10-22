#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;

inline ll powr(ll a, ll b) {
    ll x = 1;
    while (b) {
        if (b & 1) x *= a;
        a *= a;
        b >>= 1;
    }
    return x;
}

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
        if(n==1){
            cout<<1<<"\n";
            continue;
        }

        while(powr(3,cnt)<n){
            cnt++;
        }
        if(powr(3,cnt)==n){
            cout<<n<<"\n";
            continue;
        }
        j=0;
        while(j<=cnt){
            ans+=powr(3,j);
            j++;
        }
        j=cnt;
        while(j>=0){
            if(ans-(powr(3,j))>=n){
                ans-=(powr(3,j));
            }
            j--;
        }
        cout<<ans<<"\n";

    }
}

