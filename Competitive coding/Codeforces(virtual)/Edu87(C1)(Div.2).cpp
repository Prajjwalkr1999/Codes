#include<bits/stdc++.h>
#include <iomanip> 
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
#define pi 3.14159265358979323846

const int N = 100005;
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
        ld i, k, n, m, cnt = 0, sum = 0;
        cin >> n;
        if(n==2){
            ld x=1;
            cout<<std::setprecision(8)<<x<<"\n";
            x++;
            continue;
        }
        ld mul,ans=0,x,sw=0;
        sw++;
        mul=((n/2));
        x=((pi)/2)/mul;
        sw++;
        for(ld j=1;j<mul;j++){
            // cout<<cos(j*x);
            ans+=sin(j*x);
        }
        sw++;
        cout<<setprecision(9)<<(2*ans)+1<<"\n";
    }
}

