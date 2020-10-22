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
        vector<int> tick(34,-1);
        int i,j,n,x;
        for(i=0;i<10;i++){
            cin>>x;
            tick[x]=1;
        }
        cin >> n;
        vector<vector<int>> a(n,vector<int> (7,-1));
        for ( i = 0; i < n; i++) {
            for(j=0;j<6;j++){
                cin>>a[i][j];
            }
        }
        int cnt=0;
        for ( i = 0; i < n; i++) {
            cnt=0;
            for(j=0;j<6;j++){
                if(tick[a[i][j]]==1){
                    cnt++;
                }
            }
            if(cnt>=3){
                cout<<"Lucky\n";
            }else{
                cout<<"Unlucky\n";
            }
        }
    }
    return 0;
}

