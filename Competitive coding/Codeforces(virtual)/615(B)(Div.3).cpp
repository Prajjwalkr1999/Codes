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
        ll n;
        cin >> n;
        pair<ll,ll> a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i].F>>a[i].S;      
        }
        sort(a,a+n);
        string ans;
        ll x=0,y=0,flag=0;
        for(ll i=0;i<n;i++){
            if(y>a[i].S){
                flag=1;
                break;
            }
            if(x<a[i].F){
                while(x!=a[i].F){
                    ans.pb('R');
                    x++;
                }
            }
            if(y<a[i].S){
                while(y!=a[i].S){
                    ans.pb('U');
                    y++;
                }
            }
        }
        if(flag==0){
            cout<<"YES\n";
            cout<<ans<<"\n";
        }else{
            cout<<"NO\n";
        }
    }
}

