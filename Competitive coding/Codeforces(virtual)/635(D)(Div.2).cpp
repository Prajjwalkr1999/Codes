#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 9e18;

// int sq(int x) { return  x * x; }

int calc(int x,int y,int z){
    int val1=(x-y);
    val1=(val1*val1);
    int val2=(y-z);
    val2=(val2*val2);
    int val3=(z-x);
    val3=(val3*val3);
    // cout<<val1<<" "<<val2<<" "<<val3<<endl;


    return (val1)+(val2)+(val3);
}
int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int t;cin>>t;while(t--)
    {
        int i,j,n,r,g,b,k;
        cin>>r>>g>>b;
        vector<int> rr(r);
        vector<int> gg(g);
        vector<int> bb(b);
        for ( i = 0; i < r; i++) {
            cin >>rr[i];
        }
        for ( i = 0; i < g; i++) {
            cin >>gg[i];
        }

        for ( i = 0; i < b; i++) {
            cin >>bb[i];
        }
        int ans,mini;
        sort(rr.begin(),rr.end());
        sort(gg.begin(), gg.end());
        sort(bb.begin(), bb.end());
        i=0,j=0,k=0;
        ans=(calc(rr[i],gg[j],bb[k]));
        while(i<r&&j<g&&k<b){
            int val1=N,val2=N,val3=N;
            if(i<r-1){
                 val1=calc(rr[i+1],gg[j],bb[k]);
            }
            if(j<g-1){
                val2=calc(rr[i],gg[j+1],bb[k]);
            }
            if(k<b-1){
                val3=calc(rr[i],gg[j],bb[k+1]);
            }
                mini=min(val1,min(val2,val3));
                ans=min(ans,(mini));
            if(val1==mini){
                i++;
            }else if(val2==mini){
                j++;
            }else if(val3==mini){
                k++;
            }
        }
        // ans=min(ans,calc(rr[r-1],gg[g-2],bb[b-1]));

        cout<<ans<<"\n";
    }
    return 0;
}

