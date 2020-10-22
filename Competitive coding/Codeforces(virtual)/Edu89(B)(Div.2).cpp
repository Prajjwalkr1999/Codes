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
    
    int t;cin>>t;while(t--)
    {
        int i,j,n,x,m;
        cin >> n >> x >> m;
        vector<P> a(m);
        for ( i = 0; i < m; i++) {
            cin>>a[i].F>>a[i].S;
        }
        int flag=1;
        int st=x,en=x;
        for(i=0;i<m;i++){
            if((st>=a[i].F&&st<=a[i].S)&&(en>=a[i].F&&en<=a[i].S)){
                st=a[i].F;
                en=a[i].S;
                // cout<<en<<" "<<st<<"\n";
            }else if((st>=a[i].F&&st<=a[i].S)){
                st=a[i].F;
            }else if((en>=a[i].F&&en<=a[i].S)){
                en=a[i].S;
            }
        }
        cout<<en-st+1<<"\n";
    }
    return 0;
}

