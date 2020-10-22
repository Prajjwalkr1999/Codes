#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
vector<ll> ar;
void prime(ll n){
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i){
                ar.pb(i);
            }else{
                ar.pb(i);
                ar.pb(n/i);
            }
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
    
    ll t;cin>>t;while(t--)
    {
        ll n;
        cin >> n;
        
        prime(n);
     
        sort(ar.begin(),ar.end());
         for ( auto x:ar) {
                    cout<<x<<" ";
                }
        if(ar.size()<3){
            cout<<"NO\n";
        }else{
            ll flag=0;
            for(ll i=0;i<ar.size()-2;i++){
               if((n)%(ar[0]*ar[i+1])==0&& ((n)/(ar[0]*ar[i+1])!=ar[0])&& ((n)/(ar[0]*ar[i+1])!=ar[i+1]) && ((n)/(ar[0]*ar[i+1])!=1)){
                cout<<"YES\n";
                cout<<ar[0]<<" "<<ar[i+1]<<" "<<n/(ar[0]*ar[i+1])<<"\n";
                flag=1;
                break;
               }
            }
            if(flag==0){
                cout<<"NO\n";
            }
        }   
    }
}

