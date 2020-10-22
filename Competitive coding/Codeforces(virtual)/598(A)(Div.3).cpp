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
        ll i, j, k, n, a,b,s, ans = 0, cnt = 0, sum = 0;
        cin >> a>>b>>n>>s;
        if(s==b){
            cout<<"YES\n";
            continue;
        }
        if(s==n&&a>=1){
            cout<<"YES\n";
            continue;
        }
        // if((s/n)<=a&&((s%n))<=b){
        //     cout<<"YES\n";
        //     continue;
        // }
        ll sc=s;
        cnt=s/n;
        if(cnt<a){
          s=s-(cnt*n);
        }else{
            s=s-(a*n);
        }
        s=s-b;
        if(s<=0){
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";

    }
}

