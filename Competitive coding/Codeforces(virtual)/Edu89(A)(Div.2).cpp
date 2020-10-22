#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 107;

int pr[N];
vector<int> primes;

void sieve() {
    int i, j;
    for (i = 2; i < N; i++) {
        if (!pr[i]) {
            primes.pb(i);
            for (j = i; j < N; j += i) {
                pr[j]++;
            }
        }
    }
}

int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    sieve();
    int t;cin>>t;while(t--)
    {
        int a,b;
        cin >> a>>b;
        if(a==0||b==0){
            cout<<0<<"\n";
            continue;
        }
        // if(b>a){
        //     swap(a,b);
        // }
        // int st=a/2;
        // int rem_st=a%2;
        // int rem_di;
        // if(b>=st){
        //     rem_di=b-st;
        // }else{
        //     rem_st=rem_st+(st-b);
        //     rem_di=0;
        //     st=b;
        // }
        // int ans=0;
        // ans+=st;
        // int x=0;
        // if(rem_di)
        //   x=rem_di/2;

        // if(rem_st>=x && rem_st>0){
        //     ans+=x;
        // }else if(rem_st>0){
        //     ans+=rem_st;
        // }
        // int ans=0;

        // if(b%2){
        //     swap(a,b);
        // }

        // int st=a/2;
        // int rem_st=a%2;
        // int rem_di=0;
        // if(b>=st){
        //     rem_di=b-st;
        // }else{
        //     rem_st=rem_st+(st-b);
        //     rem_di=0;
        //     st=b;
        // }
        // // int ans=0;
        // ans+=st;
        // int x=0;
        // if(rem_di)
        //   x=rem_di/2;

        // if(rem_st>=x && rem_st>0){
        //     ans+=x;
        // }else if(rem_st>0){
        //     ans+=rem_st;
        // }
        int ans=0;
        int st=max(a,b);
        int di=min(a,b);
        int pos=(a+b)/3;
        ans=min(pos,di);
        cout<<ans<<"\n";
    }
    return 0;
}

