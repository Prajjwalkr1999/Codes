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
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
       vector<ll> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<ll> st;
        // st.pb(a[0]);
        ll maxp=INT_MIN,maxn=INT_MIN;
        ll turn=0;
        if(a[0]>0){
            turn=1;
        }else{
            turn =2;
        }
        for(i=0;i<n;i++){
        //     if(i==0){
        //     // st.pb(a[i]);
        //     if(a[i]>0){
        //         maxp=a[i];
        //         check=1;
        //     }else{
        //         check=2;
        //     }
        //     continue;
        // }

        if(a[i]>0){
            if(maxn!=INT_MIN&&turn==2){
                st.pb(maxn);
                turn=1;
            }
            maxn=INT_MIN;
            maxp=max(a[i],maxp);
            // cout<<maxp<<endl;
        }
        if(a[i]<0){
            if(maxp!=INT_MIN&&turn==1){
            st.pb(maxp);
            turn =2;
        }
            maxp=INT_MIN;
            maxn=max(maxn,a[i]);
        }

        }
        if(turn==2){
            st.pb(maxn);
        }else{
            st.pb(maxp);
        }
        for(auto x:st){
            // cout<<x<<" ";
            sum+=x;
        }
        // cout<<endl;
        cout<<sum<<"\n";

    }
}

