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
        int i,j,n,b,m;
        cin >> n>>b>>m;
        vector<int> a(m);
        for ( i = 0; i < m; i++) {
            cin >> a[i];
        }
        int cnt=0,prev=0;
        for(i=0;i<m;i++){
            if(((a[i]/b)+1)!=prev){
                cnt++;
            }
            prev=a[i]/b+1;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}

