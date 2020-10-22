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
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        ll c[n],r[n];
        pair<ll,ll> cir[n];
        for ( i = 0; i < n; i++) {
            cin >> c[i]>>r[i];
            ll max=c[i]+r[i];
            ll min=c[i]-r[i];
            cir[i].F=max;
            cir[i].S=min;
        }

        sort(cir,cir+n);
        ll val=cir[0].F;
         for ( ll i = 1; i < n; i++) {
                 if(val<=cir[i].S){
                    val=cir[i].F;
                 }else{
                    cnt++;
                 }   
            }
            cout<<cnt<<endl;


    }
}

