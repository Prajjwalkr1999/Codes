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

    ll n,t;
    ll a[n];
    cin>>n>>t;
     for ( ll i = 1; i <= n; i++) {
             cin>>a[i];   
            }
    while(t--)
    {
        ll z;
        cin>>z;
        if(z==1){
            ll l,r,min;
            cin>>l>>r;
            min=a[l];
            for(ll i=l;i<=r;i++){
                if(a[i]<min){
                    min=a[i];
                }
            }
            cout<<min<<endl;
        }else{
            ll x,y;
            cin>>x>>y;
            a[x]=y;

        }

    }
}

