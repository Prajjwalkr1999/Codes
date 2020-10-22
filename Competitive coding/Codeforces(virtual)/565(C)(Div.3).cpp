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
        ll i, j, k, n, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        vector<ll> a(n);
        map<ll,ll> m;
        m[4]=0;
        m[8]=1;
        m[15]=2;
        m[16]=3;
        m[23]=4;
        m[42]=5;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<ll> check(6,0);
        for(auto x:a){
            if(m[x]==0){
                check[0]++;
            }else{
                if(check[m[x]-1]>0){
                    check[m[x]]++;
                    check[m[x]-1]--;
                }
            }
        }
        ans=n-(check[5]*6);
        cout<<ans<<"\n";

    }
}

