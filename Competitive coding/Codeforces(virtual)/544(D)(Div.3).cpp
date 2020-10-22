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
    
    // ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, d, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        vector<ld> a(n);
        vector<ld> b(n);
        for ( i = 0; i < n; i++) {
            cin >> j;
            // if(j<0){
            //     j=j*(-1);
            //     a[i]=j;
            //     continue;
            // }
            a[i]=j;

        }
        // for(auto x: a){
        //     cout<<x<<" ";
        // }
        // cout<<endl;

        for ( i = 0; i < n; i++) {
            cin >> j;
            // if(j<0){
            //     j=j*(-1);
            //     b[i]=j;
            //     continue;
            // }
            b[i]=j;
        }
        map<ld,ll> map;
        for(i=0;i<n;i++){
            if(a[i]!=0){
                if(b[i]==0){
                    // cnt++;
                    map[0]++;
                    continue;
                }
              map[(b[i]/a[i])]++; 
            }
            
        }
        for(auto x:map){
            if(ans<x.S){
                ans=x.S;
            }
        }
        for(i=0;i<n;i++){
            if(a[i]==0&&b[i]==0){
                ans+=1;
            }
        }
     cout<<ans<<"\n";
        
    }
}

