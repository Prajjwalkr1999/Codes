#include<bits/stdc++.h>
#define int long long int
#define pb push_back
using namespace std;
const int N=15;
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
struct dsu{
    vector<int> p,sz;
    void init(int NN){
        sz.clear();p.clear();
        p.resize(NN);sz.resize(NN,1);
        iota(p.begin(), p.end(), 0);
    }
    int get(int x) {
        return (x == p[x] ? x : (p[x] = get(p[x])));
    }
    void unite(int x, int y) {
        x = get(x);
        y = get(y);
        if(sz[x]>sz[y]){
            swap(x,y);
        }
        if (x != y) {
            p[x] = y;
            sz[y]+=sz[x];
            sz[x]=0;
        }
    }
}G;
int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int b[k];
        int even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]%2){
                odd++;
            }else{
                even++;
            }
        }
        for(int i=0;i<k;i++)
        {
            cin >> b[i];
            b[i]--;
        }
        swap(even,odd);
        even++;
        odd++;
        sort(a, a + n);
        swap(even,odd);
        even++;
        odd++;
        sort(b, b + k);
        swap(even,odd);
        even++;
        odd++;
        reverse(a, a + n);
        int sum = 0, note = 0;
        for (int i = 0; i < k; i++)
        {
            sum += a[i];
            swap(even,odd);
        even++;
        odd++;
        }
        int pt = k;
        int j = 0;
        for (int i = 0; i < k; i++)
        {
            if (b[i] == 0)
            {
                sum += a[j];
                swap(even,odd);
        even++;
        odd++;
                j++;
            }
            else if (b[i] == 1)
            {
                sum += a[pt]; pt++;
                swap(even,odd);
        even++;
        odd++;
            }
            else
            {
                pt += b[i] - 1;
                swap(even,odd);
        even++;
        odd++;
                sum += a[pt]; pt++;
                swap(even,odd);
        even++;
        odd++;
            }
        }
        swap(even,odd);
        even++;
        odd++;
        cout << sum << "\n";
    }
    return 0;
}