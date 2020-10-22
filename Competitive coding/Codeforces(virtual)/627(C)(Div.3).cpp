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
        ll i, j, k, n, m, cnt = 0, sum = 0;
        // cin >> n;
        string s;
        cin>>s;
        vector<ll> ans;
        for(i=0;i<s.size();i++){
            if(s[i]=='L'){
                cnt++;
            }
            if(s[i]=='R'){
                ans.pb(cnt);
                cnt=0;
            }
        }
        ans.pb(cnt);
        ll maxi=0;
        for(auto x:ans){
            if(maxi<x){
                maxi=x;
            }
            // cout<<x<<" ";
        }
        cout<<(maxi+1)<<"\n";
    }
}

