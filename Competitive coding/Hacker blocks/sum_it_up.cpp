#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back



const ll N=100005;

// bool comp(pair <ll,string> lhs,pair<ll,string> rhs){
//     stringstream l(lhs.S);
//     int lh=0;
//     l>>lh;

//     stringstream r(rhs.S);
//     int rh=0;
//     r>>rh;

//     return lh<rh;

// }

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    // ll t;
    // cin>>t;
    // while(t--){
        ll n,j,sum,y,flag,k,i;
        cin>>n;
        ll a[n];
         for ( ll i = 0; i < n; i++) {
                 // a[i].F=i;
                 cin>>a[i];   
                }
        cin>>k;
        sort(a,a+n);
        // reverse(a,a+n);
        ll x=(1<<n)-1;
        vector<ll> ans;
        vector<vector<ll>> final(n,vector<ll>(15,0));
        for(i=1;i<=x;i++){
            j=0;
            sum=0;
            y=i;
            while(y>0){
                if(y&1){
                    sum+=a[j];
                }
                j++;
                y=y>>1;
            }
            if(sum==k){
              ans.push_back(i);  
            }
        }
        i=0;
        for(auto x:ans){
            j=0;
            y=x;
            while(y>0){
                if(y&1){
                    final[i].pb(a[j]);
                    i++;
                }
                j++;
                y=y>>1;
            }
        }
       
        ll size=final.size();
        sort(final.begin(),final.end());
        unique(final.begin(),final.end()+size);
        
        for(auto ans:final){
            for(auto x:ans){
                cout<<x<<" ";
            }
            cout<<endl;
        }
        
    }
// }