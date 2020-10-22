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
        vector<ll> a(n);
        vector<ll> sum(n);
        vector<ll> check(n);
        ll flag=0;
        // cout<<n<<endl;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            if(check[a[i]]<2){
                check[a[i]]++;
            }else{
                flag=1;
            }
            if(i==0){
                sum[i]=a[i];
            }else{
                // if(check[a[i]]==1){
                sum[i]=sum[i-1]+a[i];
            }
        }
         // for ( int i = 0; i < n; i++) {
         //         cout<<sum[i]<<" ";   
         //        }
         //        cout<<endl;
        if(flag==0){
        pair<ll,ll> ax[n];
        int val1,val2,sec,flag=0,ans=0,count=0;
        for(ll i=0;i<n;i++){
       
            sec=sum[n-1]-sum[i];
            val1=((i+2)*(i+1))/2;
            val2=((n-i-1)*(n-i))/2;
            // cout<<"pre : "<<sum[i]<<" val : "<<val1<<"\n";
            // cout<<"post : "<<sec<<" val : "<<val2<<"\n";
            if(sum[i]==val1&&sec==val2){
                      count = std::distance(a.begin(), 
                          std::unique(a.begin(), a.begin() + i+1));
                          if(count!=i+1){
                            // cout<<count<<i+1;
                            break;
                          }
                          count = std::distance(a.begin()+i+2, 
                          std::unique(a.begin(), a.end()));
                          if(count!=i+1){
                            cout<<count<<" "<<i+1;
                            cout<<endl;
                            break;
                          }
                ax[ans].F=i+1;
                ax[ans].S=n-i-1;
                ans++;
                // cout<<i+1<<" "<<n-i<<"\n";
                flag=1;
            }
        }
        if(flag==0){
            cout<<0<<"\n";
        }else{
            cout<<ans<<"\n";
            for(int i=0;i<ans;i++){
                cout<<ax[i].F<<" "<<ax[i].S<<"\n";
            }
        }
    }else{
        cout<<0<<"\n";
    }

    }
}

