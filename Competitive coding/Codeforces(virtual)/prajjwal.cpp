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
        ll i, j, k, n, s, ans = 0, cnt = 0, sum = 0;
        cin >> n>>s;
        vector<ll> price(n);
        vector<ll> pos(n);
        for ( i = 0; i < n; i++) {
            cin >> price[i];
        }
        for ( i = 0; i < n; i++) {
            cin >> pos[i];
        }
        vector<P> pst(n);
        for ( i = 0; i < n; i++) {
            pst[i].F=price[i];
            pst[i].S=pos[i];
        }
        sort(pst.begin(),pst.end());
        // for(auto x:pst){
        //     cout<<x.F<<" "<<x.S<<"\n";
        // }
        ll check=100-s;
        if(pst[0].F<check){
            check=check-pst[0].F;
            ll find=abs(pst[0].S-1);
            ll flag=0;
            for(i=1;i<n;i++){
                if(pst[i].S==find){
                    if(pst[i].F<=check){
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1){
                cout<<"yes\n";
            }else{
                cout<<"no\n";
            }
        }else{
            cout<<"no\n";
        }

    }
}

