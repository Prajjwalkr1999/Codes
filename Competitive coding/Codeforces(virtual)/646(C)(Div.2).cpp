#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 105;
int pr[N];
vector<int> primes;

void seive() {
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
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    seive();
    ll t;cin>>t;while(t--)
    {
        ll i, j, k,pr, n,x, m, ans = 0, cnt = 0, sum = 0;
        cin>>n>>x;
        // vector<P> a(n);
        if(n==1){
            cout<<"Ayush\n";
            continue;
        }
        for ( i = 0; i < n-1; i++) {
            pr++;
            cin>>j>>m;
            if(j==x||m==x){
                cnt++;
                pr=m;
            }else{
                sum++;
                pr=j;
            }
        }
        if(cnt==1){
            cout<<"Ayush\n";
            pr++;
            continue;
        }
        ans=cnt+sum-1;
        if(ans%2==0){
            pr=2;
            pr--;
            cout<<"Ayush\n";
        }else{
            pr=3;
            pr--;
            cout<<"Ashish\n";
        }
    }
    return 0;
}

