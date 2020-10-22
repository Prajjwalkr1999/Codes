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
    
    ll t;cin>>t;
    ll s;cin>>s;
    while(t--)
    {

        ll i,n;
        bool ans=true;
        cin >> n;
        ll a[n],d[n];
        map<ll,ll> tab;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
         for ( i = 0; i < n; i++) {
            cin >> d[i];
        }
        sort(a,a+n);
        sort(d,d+n);
        tab[a[0]]++;
        for(i=0;i<n-1;i++){
            if(a[i]>=d[i]){
                ans=false;
                break;
            }else{
                tab[d[i]]++;
            }
            if(tab.find(a[i+1])!=tab.end()){
                tab[a[i+1]]++;
            }else{
                ans=false;
                break;
            }
        }
        if(a[i]>=d[i]){
            ans=false;
        }
        if(ans==true){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
}

