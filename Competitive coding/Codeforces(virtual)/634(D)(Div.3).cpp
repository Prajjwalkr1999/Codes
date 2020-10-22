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
        // cin >> n;
        n=9;
        vector<vector<ll>> a(9,vector<ll> (9));
        vector<string> s;
        string x;
        for ( i = 0; i < n; i++) {
           cin>>x;
           s.pb(x);
        }
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                a[i][j]=(s[i][j]-'0');
            }
        }
        a[8][0]=a[8][1];
        a[5][1]=a[5][2];
        a[2][2]=a[2][3];
        a[0][3]=a[0][4];
        a[3][4]=a[3][5];
        a[6][5]=a[6][6];
        a[7][6]=a[7][7];
        a[4][7]=a[4][8];
        a[1][8]=a[1][0];

        for ( i = 0; i < 9; i++) {
            for(j=0;j<9;j++){
                cout<<a[i][j];
            }
            cout<<"\n";
        }

    }
}

