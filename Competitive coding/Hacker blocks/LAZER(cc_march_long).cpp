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
        ll n,q,x1,x2,y,k,ya,ans=0;
        double xa;
        cin >> n>>q;
        ll a[n+1]; 
        ll p[n+1];
        for (ll i = 1; i <=n; i++) {
            cin >> k;
            a[i]=k;
            if(i>1){
                p[i-1]=a[i]-a[i-1];
            }
        }

        while(q--){
            ans=0;
            cin>>x1>>x2>>y;
            for(ll i=1;i<n;i++){
                xa=((double)(y-a[i])/(double)(p[i]))+i;
                // cout<<"Q = "<<q<<" xa = "<<xa<<endl;
                if(x1==i&&a[i]==y){
                    ans++;
                }
                if(x2==i+1&&a[i+1]==y){
                    ans++;
                }
                if(xa>x1&&xa<x2&&xa>i&&xa<i+1){
                    ans++;
                    // cout<<"ANS = "<<ans<<endl;
                }

            }
            cout<<ans<<"\n";
        }

    }
}

