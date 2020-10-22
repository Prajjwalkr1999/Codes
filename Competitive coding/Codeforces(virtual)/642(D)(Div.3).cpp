#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<ll,ll>
#define pb push_back

const int N = 100005;

vector<ll> arr;

struct compareSize { 
    bool operator()(P const& x1, P const& x2) 
    { 
        ll first = x1.S-x1.F;
        ll second = x2.S-x2.F;
        if(first != second){
            return first<second;
        }else{
            return x1.F > x2.F; 
        }
        
    } 
};

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

void solve(ll i, ll j,ll n,ll count){
    priority_queue< P, vector<P>, compareSize> gq; 
    gq.push({i,j});
    while(!gq.empty()){
        pair<ll,ll> x = gq.top();
        i = x.F;
        j = x.S;
        swap(i,j);
        ll mid = (i+j)/2;
        arr[mid] =count++;
        swap(i,j);
        gq.pop();
            if(mid-1>=i){
                gq.push({i,mid-1});
            }
            if(j>=mid+1){
                gq.push({mid+1,j});
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
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        arr.resize(n,0);
        solve(0,n-1,n,1);
        for(auto x:arr){
            cout<<x<<" ";
        }
        cout<<"\n";

    }
}

