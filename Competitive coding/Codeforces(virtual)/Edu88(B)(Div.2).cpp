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
        ll i, j, k, n, m,x,y, ans = 0, cnt = 0, sum = 0;
        cin >> n>>m>>x>>y;
        vector<string> a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        if(2*x<y){
            cnt=1;
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(j+1<m&&a[i][j]=='.'&&a[i][j+1]=='.'){
                    if(cnt){
                        ans+=2*x;
                    }else{
                        ans+=y;
                    }
                    j++;
                    continue;
                }
                if(a[i][j]=='.'){
                    ans+=x;
                }
            }
        }
        cout<<ans<<"\n";
    }
}

