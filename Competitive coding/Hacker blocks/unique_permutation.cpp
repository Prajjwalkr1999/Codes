#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
vector<vector<ll>> ans;
void permute(vector<ll> str,ll l,ll r){
    if(l==r){
       ans.pb(str);
    }

    for(ll i=l;i<=r;i++){
        // if(str[l]==str[i])
        {
        swap(str[l],str[i]);
        permute(str,l+1,r);
        swap(str[l],str[i]);
    }
    }
}
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
        vector<ll> str;
        ll n,temp;
        cin>>n;
        for(ll i=0;i<n;i++){
            cin>>temp;
            str.pb(temp);
        }
        // ll n=str.length();

        permute(str,0,n-1);
        
        // ll size=ans.size();

        sort(ans.begin(),ans.end());
        vector<vector<ll>>::iterator ip; 
        ip=unique(ans.begin(),ans.end());
         ans.resize(distance(ans.begin(), ip)); 
        for(auto x:ans){
           for(auto z:x){
            cout<<z<<" ";
           }
           cout<<endl;
        }

    }

}

