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
        int i,j,n,m;
        cin >> n>>m;
        vector<vector<int>> a(n,vector<int> (m,0));
        for ( i = 0; i < n; i++) {
            for( j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        bool flag=true;
        for ( i = 0; i < n; i++) {
            for( j = 0; j < m; j++){
                 if((i == 0 && j == 0) || (i == n-1 && j == 0) || (i == n-1 && j == m-1) || (i==0 && j == m-1)){
                    if(a[i][j] > 2){
                        flag = false;
                    }
                    a[i][j] = 2;
                }else if (i == 0 || j == 0 || i == n-1 || j == m-1){
                    if(a[i][j] > 3){
                        flag = false;
                    }
                    a[i][j] = 3;
                }else{
                    if(a[i][j] > 4){
                        flag = false;
                    }
                    a[i][j] = 4;
                }
            }
        }


        if(!flag){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    cout<<a[i][j]<<" ";
                }
                cout<<"\n";
            }


        }



    }
    return 0;
}

