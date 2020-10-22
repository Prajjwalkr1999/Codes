#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;

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
        int i,j,n;
        int a,b,c;
        cin >> a>>b>>c;
        int even=0,odd=0;
        if(a%2){
            odd++;
            if(b%2){
                odd--;
            }
        }else{
            even++;
        }
        if(a>=c){
            cout<<-1<<" ";
            even++;
            odd++;
        }else{
            cout<<"1 ";
        }
        int cnt=(c/b);
        if(cnt>=a){
            cout<<"-1\n";
        }else{
            cout<<b<<"\n";
        }


    }
    return 0;
}

