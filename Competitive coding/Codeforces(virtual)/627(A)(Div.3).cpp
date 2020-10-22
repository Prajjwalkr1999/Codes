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
        ll i, j, k, n, m, ans = 0, cnt = 0, flag = 0;
        cin >> n;
        ll a[n];
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(a[0]%2==0){
            flag=0;
            for(i=1;i<n;i++){
                if(a[i]%2!=0){
                    flag=1;
                    break;
                   }
                }
                if(flag==0){
                    cout<<"YES\n";
                    continue;
                }else{
                    cout<<"NO\n";
                    continue;
                }
            
        }else{
            flag=0;
            for(i=1;i<n;i++){
                if(a[i]%2==0){
                    flag=1;
                    break;
                    }
                }
                if(flag==0){
                    cout<<"YES\n";
                    continue;
                }else{
                    cout<<"NO\n";
                    continue;
                }
            
        }

    }
}

