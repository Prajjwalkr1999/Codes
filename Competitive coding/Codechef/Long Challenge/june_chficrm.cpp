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
        int i,j,n;
        cin >>n;
        vector<int> a(n);
        vector<int> coin(16,0);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        int flag=0;
        for(i=0;i<n;i++){
            if(a[i]==5) {
                coin[a[i]]++;
                continue;
            }
            if(a[i]==10){
                if(coin[5]>0){
                    coin[5]--;
                    coin[10]++;
                }else{
                    flag=1;
                    break;
                }
                continue;
            }
            if(a[i]==15){
                if(coin[10]>0){
                    coin[10]--;
                }else if(coin[5]>1){
                    coin[5]-=2;
                }else{
                    flag=1;
                    break;
                }
            }
        }
        if(flag){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}

