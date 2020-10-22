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
    
    // ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, swapstart=0,swapend=0;
        string s;
        cin >>n>>s;
        std::vector<ll> a(10);
        for ( i = 1; i < 10; i++) {
            cin >> a[i];
        }
        for(i=0;i<n;i++){
            if(a[s[i]-'0']>(s[i]-'0')){
                s[i]=char(a[s[i]-'0']+'0');
                swapstart=1;
            }else{
                if(swapstart==1&&a[s[i]-'0']!=(s[i]-'0')){
                    break;
                }
            }
        }
        cout<<s<<"\n";

    }
}

