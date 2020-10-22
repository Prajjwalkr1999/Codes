#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

vector<ll> a;

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
        ll n, sum = 0;
        cin >> n;
        a.resize(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            sum+=a[i];
        }
        ll check=(sum-1)*6+1;
        if(n>=check){
            ll p1,p2,sflag=0;
            p1=0;
            p2=0;
           for(ll i=0;i<n;i++){
            if(a[i]==1&&sflag==0){
                p1=i;
                sflag=1;
            }
           }
           ll flag=0;
           for(ll i=p1+1;i<n;i++){
                if(a[i]==1){
                    if(i-p1>=6){
                        p1=i;
                    }else{
                        flag=1;
                    }
                }
           }
           if(flag==1){
            cout<<"NO\n";
           }else{
            cout<<"YES\n";
           }
        }else{
            cout<<"NO\n";
        }

    }
}

