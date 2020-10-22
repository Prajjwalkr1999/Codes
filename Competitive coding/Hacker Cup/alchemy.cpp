#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back

const int N = 17;

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


    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    
    int t;cin>>t;int xc=1;while(t--)
    {
        sieve();
        int i,j,n;
        cin >> n;
        string a;
        cin>>a;
        int x=0,y=0;
        int ac=1,bc=1;
        for(i=0;i<n;i++){
            if(a[i]=='A'){
                x++;
                ac+=(bc+x);
            }else{
                y++;
                ac-=(bc+y);
            }
        }
        cout<<"Case #"<<xc<<": ";
        xc++;
        if(abs(x-y)==1){
            cout<<"Y\n";
        }else{
            cout<<"N\n";
        }

    }
    return 0;
}

