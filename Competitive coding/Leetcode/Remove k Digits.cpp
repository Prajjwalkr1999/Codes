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
        // int i,j,n;
        // cin >> n;
        string a;
        cin>>a;
        int k;
        cin>>k;
        int n=a.size();
         vector<int> vis(n+1,0);
        int i=0,j=1;
        while(i<n&&j<n){
            if(k==0){
                break;
            }
            if(a[i]>a[j]){
                // cout<<i<<j<<endl;
                if(!vis[i]){
                    vis[i]=1;
                    i--;
                    k--;
                }else{
                    // cout<<i<<j<<endl;
                    i--;
                }
            }else{
                i++;
                if(vis[i]){
                    while(vis[i]&&i<n){
                        i++;
                    }
                }
                j++;
                if(vis[j]){
                    while(vis[j]&&j<n){
                        j++;
                    }
                }
            }
        }
        string ans="";
        for(int i=0;i<n;i++){
            if(!vis[i]){
                ans+=a[i];
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}

