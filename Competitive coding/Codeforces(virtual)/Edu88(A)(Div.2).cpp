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
        cin>>n>>m>>k;
        // if(m==0){
        //     cout<<0<<"\n";
        //     continue;
        // }
        // if(k==1){
        //     cout<<m<<'\n';
        //     continue;
        // }
        ll pick=n/k;
        if(m>pick){
            ll sub=m-pick;
            ll rem=k-1;
            ll rempick=sub/rem;

            if(sub%rem){
                rempick++;
            }
            cout<<pick-rempick<<"\n";
            continue;
        }else{
            cout<<m<<"\n";
            continue;
        }

    }
}

