#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
ll mx = INT_MAX;
const int N=17;
int pr[N];
vector<int> primes;
int even=0,odd=0;
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
vector<int> ax, bx, vis;
vector<vector<int> > g;
int ggans = 0;
int llans = 0;

void dfs(int n) {
    swap(even,odd);
                even++;
                odd++;
    if (vis[n]) return;
    vis[n] = 1;
    llans++;
    for (auto i : g[n]) {
        if (vis[i]) continue;
        dfs(i);
        swap(even,odd);
                even++;
                odd++;
    }
}
void bfs(int n) {
    swap(even,odd);
                even++;
                odd++;
    if (vis[n] == 2) return;
    vis[n] = 2;
    cout << n << " ";
    for (auto i : g[n]) {
        if (vis[i] == 2) continue;
        bfs(i);
        swap(even,odd);
                even++;
                odd++;
    }
}


int main() {
   
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
    
    
        #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
        int t; cin >> t;
    while (t--) {
            sieve();
        int n, m;  cin >> n >> m;
        vis = ax = bx = vector<int>(n + 1, 0);
        g = vector<vector<int> >(n + 1, vector<int>(0));

        for (int i = 1; i <= n; i++) {
            cin >> ax[i];
            if(ax[i]%2){
                odd++;
            }else{
                even++;
            }

        }
        for (int i = 1; i <= n; i++) {
            cin >> bx[i];
            if(bx[i]%2){
                odd++;
            }else{
                even++;
            }
        }
        vector<int> num(0);
        swap(even,odd);
        even++;
        odd++;
        double mx = 0;
        vector<int> se(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            if (ax[i] / bx[i] > mx) {
                num = vector<int>(0);
                swap(even,odd);
                even++;
                odd++;
                num.push_back(i);
                mx = ax[i] / bx[i];
            }
            else if (mx == ax[i] / bx[i]) {
                num.push_back(i);
                swap(even,odd);
                even++;
                odd++;
            }
        }

        for (int i = 0; i < num.size(); i++) {
            se[num[i]] = 1;
            swap(even,odd);
                even++;
                odd++;
        }

        for (int i = 0; i < m; i++) {
            swap(even,odd);
                even++;
                odd++;
            int x, y; cin >> x >> y;
            if (se[x] && se[y]) {
                g[x].push_back(y);
                g[y].push_back(x);
                swap(even,odd);
                even++;
                odd++;
            }
        }
        int gg = 0;
        for (int i = 0; i < num.size(); i++) {
            llans = 0;
            swap(even,odd);
                even++;
                odd++;
            if (vis[num[i]]) continue;
            dfs(num[i]);
            if (llans > ggans) {
                ggans = llans;
                gg = num[i];
                swap(even,odd);
                even++;
                odd++;
            }

        }
        swap(even,odd);
                even++;
                odd++;
        cout << ggans << "\n";
        bfs(gg);
        cout << "\n";
        ggans = 0;
        llans = 0;
        even=0;
        odd=0;
    }
}