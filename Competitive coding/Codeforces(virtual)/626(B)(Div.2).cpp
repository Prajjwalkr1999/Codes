#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;


int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    // int t;cin>>t;while(t--)
    {
        int i,j,n,m,k;
        cin >> n>>m>>k;
        vector<int> a(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b(m);
        for(i=0;i<m;i++){
            cin>>b[i];
        }

        vector<int> cnta(n+10,0);
        vector<int> cntb(m+10,0);
        int cnt=0;
        for(i=0;i<n;i++){
            if(a[i]==1){
                cnt++;
                j=i;
                while(j<n&&a[j]==1){
                    j++;
                }
                for(int k=1;k<=j-i;k++){
                    cnta[k]+=j-i-k+1;
                }
                i=j;
            }
            // if(cnta[cnt]==0){
                // cout<<cnt<<"\n"
            // }
        }
        cnt=0;
        for(i=0;i<m;i++){
             if(b[i]==1){
                // cnt++;
                j=i;
                while(j<m&&b[j]==1){
                    j++;
                }
                for(int k=1;k<=j-i;k++){
                    cntb[k]+=j-i-k+1;
                }
                i=j;
            }
        }
        int ans=0;
        for(i=1;i*i<=k;i++){
            if(k%i==0){
                cout<<cnta[i]<<" "<<k/i<<" "<<cntb[k/i]<<'\n';
                ans+=cnta[i]*cntb[k/i];
                if(i!=k/i){
                    cout<<cnta[i]<<" "<<k/i<<" "<<cntb[k/i]<<'\n';
                    ans+=cnta[k/i]*cntb[i];
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}

