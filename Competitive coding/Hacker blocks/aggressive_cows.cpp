#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;

ll allowed(ll a[],ll n,ll k,ll c){
     // for ( int i = 0; i < n; i++) {
     //         cout<<a[i]<<" ";   
     //        }
    ll pos=a[0];
    ll cows=1;
    for(ll i=1;i<n;i++){
        if(a[i]-pos>=k){
            // cout<<a[i]-
            cows++;
            pos=a[i];
            if(cows==c){
               // cout<<"returning 1"<<endl;
                return 1;
            }
        }
    }
    return 0;
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
        ll i, n, c ,max = 0;
        cin >> n>>c;
        ll a[n];
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a,a+n); 

        ll start=0;
        ll end=a[n-1];
       
        while(start<=end){
             // cout<<"working2"<<endl;
            int mid=(start+end)/2;
            // cout<<"mid = "<<mid<<endl;
            if(allowed(a,n,mid,c)==1){
                // cout<<"working"<<endl;
                if(max<mid){
                    max=mid;
                }
                start=mid+1;
            }else{
                end=mid-1;
                // cout<<"Mid = "<<mid<<endl;
            }
        }

        cout<<max<<endl;


    }
}

