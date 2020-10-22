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
        int i,j,n,a,b,k;
        cin >> a>>b;
        if(a==b){
            cout<<0<<"\n";
            continue;
        }
        if(a<b){
            swap(a,b);
        }
        // cout<<a;
        int ans=0;
        while(a%8==0){
            a/=8;
            ans++;
            if(a==b) break;
        }
        // cout<<a;
        if(a==b){
            cout<<ans<<"\n";
            continue;
        }
        while(a%4==0){
            a/=4;
            ans++;
            if(a==b) break;
        }
        // cout<<a;
        if(a==b){
            cout<<ans<<"\n";
            continue;
        }
        while(a%2==0){
            a/=2;
            ans++;
            if(a==b) break;
        }
        // cout<<a;
        if(a==b){
            cout<<ans<<"\n";
            continue;
        }
        cout<<-1<<"\n";
        // int gg=10,zz=20;
        // int cnt1=0,cnt2=0;
        // while(a%2==0){
        //     swap(gg,zz);
        //     a/=2;
        //     cnt1++;
        // }
        // while(b%2==0){
        //     swap(gg,zz);
        //     b/=2;
        //     cnt2++;
        // }
        // if(a!=b){
        //     swap(gg,zz);
        //     cout<<-1<<"\n";
        //     continue;
        // }
        // if(cnt1>cnt2){
        //     while(cnt1-cnt2>=3){
        //         swap(gg,zz);
        //         cnt1-=3;
        //         ans++;
        //     }
        //     if(cnt1!=cnt2){
        //         ans++;
        //     }
        // }else{
        //     while(cnt2-cnt1>=3){
        //         swap(gg,zz);
        //         cnt1+=3;
        //         ans++;
        //     }
        //     if(cnt1!=cnt2){
        //         ans++;
        //     }
        // }
        // swap(gg,zz);
        // cout<<ans<<"\n";
    }
    return 0;
}

