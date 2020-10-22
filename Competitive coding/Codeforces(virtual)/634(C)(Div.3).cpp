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
        ll n, ans = 0;
        cin >> n;
        vector<ll> a(n);
        map<ll,ll> m;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        ll uni=m.size();
        // cout<<"uni : "<<uni<<endl;
        ll maxe=INT_MIN;
        for(auto x:m){
            if(x.S>maxe){
                maxe=x.S;
            }
        }
        // cout<<"max : "<<maxe;
        if(uni==maxe){
            ans=uni-1;
        }else if(uni>maxe){
            ans=maxe;
        }else if(uni<maxe){
            ans=uni;
        }
        cout<<ans<<"\n";

    }
    return 0;
}

