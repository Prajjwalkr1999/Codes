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
        ll i=1, j, k, n, m, cnt = 0, sum = 0;
        cin >> n;
        ll nc=n;
        vector<ll> pos;
        while(nc>0){
            if(nc%10!=0){
                pos.pb(i);
            }
            nc=nc/10;
            i++;
        }
        vector<ll> ans;
        nc=n;
        ll rem=0,mul=0;
        // for(auto x:pos){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        for(i=0;i<pos.size();i++){
            mul=pow(10,pos[i]);
            // cout<<mul<<" ";
            rem=nc%(mul);
            nc-=rem;
            // cout<<nc<<" ";
            ans.pb(rem);
        }
        cout<<ans.size()<<"\n";
        for(auto x: ans){
            cout<<x<<" ";
        }
        cout<<"\n";

    }
}