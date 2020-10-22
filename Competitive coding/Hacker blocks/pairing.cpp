#include<bits/stdc++.h>
using namespace std;

#define ll long long int

const ll N = 100005;

struct dsu {
    vector<ll> p, sz;
    ll comp;
    void init(ll NN) {
        sz.clear(); p.clear();
        p.resize(NN); sz.resize(NN, 1);
        iota(p.begin(), p.end(), 0);
        comp = NN;
    }
    ll get(ll x) {
        return (x == p[x] ? x : (p[x] = get(p[x])));
    }
    void unite(ll x, ll y) {
        x = get(x);
        y = get(y);
        if (x != y) {
            p[x] = y;
            sz[y] += sz[x];
            sz[x] = 0;
            comp--;
        }
    }
} G;

int main() {

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n, m;
    cin >> n >> m;
    G.init(n);
    while (m--) {
        ll x, y;
        cin >> x >> y;
        G.unite(x, y);
    }
    ll a[n] = {0}, ans = 1;
    for (ll i = 0; i < n; i++) {
        a[G.get(i)]++;
    }
    for (ll i = 0; i < n; i++) {
        for(ll j=i+1;j<n;j++){
        if (a[i] != 0)
            ans = ans +a[i]*a[j];
        }
    }
    cout<<ans<<endl;

}