#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 105;
struct fenwick {
    vector<int> fn;
    int n;
    void init(int _n) {
        n = _n + 10;
        fn.clear(); fn.resize(n, 0);
    }
    void add(int x, int val) {
        x++;// 1 based indexing
        while (x <= n) {
            fn[x] += val;
            x += (x & (-x));
        }
    }
    int sum(int x) {
        x++;//1 basaed indexing
        int ans = 0;
        while (x) {
            ans += fn[x];
            x -= (x & (-x));
        }
        return ans;
    }
} bit;

int pr[N];
vector<int> primes;



void swapcircleopp(ll *x,ll *y,ll *z){
    ll tempx;
    tempx = *x;
    *x = *y;
    *y = *z;
    *z = tempx;

}
void seive() {
    ll i, j;
    for (i = 2; i < N; i++) {
        if (!pr[i]) {
            primes.pb(i);
            for (j = i; j < N; j += i) {
                pr[j]++;
            }
        }
    }
}
void swapcircle(ll *x,ll *y,ll *z){
    ll tempx;
    tempx = *y;
    *y = *x;
    *x = *z;
    *z = tempx;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    seive();
    ll t;cin>>t;while(t--)
    {
        ll i, j=0, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >>n>>k;
        vector<ll> a(n+1);
        for ( i = 1; i <=n; i++) {
            cin >> a[i];

        }
        ll flag=0,x,y,z;
        // while(flag==0){
        //         x=a[i];
        //         y=a[a[i]];
        //         z=a[a[a[i]]];
        //         swapcircleopp(&x,&y,&z);
        //         flag=1;
        // }
        vector<ll> d;
        vector<vector<ll>> triple;
        vector<ll> visi(n+1,0);
        for(i=1;i<=n;i++){
            if(a[i]==(i)){
                continue;
            }
            if(visi[i]==1){
                continue;
            }
            ll x,y,z;
            x=a[i];
            y=a[a[i]];
            z=a[a[a[i]]];
            swapcircleopp(&x,&y,&z);
            if(a[a[i]]==(i)&&visi[i]==0&&visi[a[i]]==0){
                d.pb(max(a[i],i));
                d.pb(min(a[i],i));
                visi[a[i]]=1;
                visi[i]=1;
                x=a[i];
                y=a[a[i]];
                z=a[a[a[i]]];
                swapcircleopp(&x,&y,&z);
                continue;
                
            }
                // cnt++;
                triple.pb({i,a[i],a[a[i]]});
                j++;
                visi[a[i]]=1;
                visi[a[a[i]]]=1;
                if(a[a[a[i]]]==i){
                    visi[i]=1;
                }
                swapcircle(&a[i],&a[a[i]],&a[a[a[i]]]);
                x=a[i];
                y=a[a[i]];
                z=a[a[a[i]]];
                swapcircleopp(&x,&y,&z);
                i--;
            

        }
        // ll x,y,z;
        if((d.size()%4)==0&& ((d.size()/2)+triple.size())<=k){
            ans=(d.size()/2)+triple.size();
            cout<<ans<<"\n";
            for(auto x:triple){
                for(auto y:x){
                    cout<<y<<" ";
                }
                cout<<"\n";
            }
            for(i=0;i<d.size();i+=4){
                x=d[i];
                y=d[i+2];
                z=d[i+1];
                swapcircleopp(&x,&y,&z);
                cout<<d[i]<<" "<<d[i+1]<<" "<<d[i+2]<<"\n";    
                cout<<d[i]<<" "<<d[i+3]<<" "<<d[i+2]<<"\n";
            }
        }else{
            ans=-1;
            cout<<ans<<"\n";
        }

    }
}

