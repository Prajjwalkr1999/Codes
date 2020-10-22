#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second
const int N=15;
int pr[N];
vector<int> primes;

const int mod = 998244353;
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

bool isprime(int y){
    for(int i=2;i*i<=9;i++){
        if(y%i==0){
            return false;
        }
    }
    return true;
}
bool akon(int x,int y){
    x+=y;
    if(isprime(y)){
        swap(x,y);
    }
    return x>y;
}
int func1(int a, int b, int *x, int *y)
{
    int even=0,odd=0;
    if (a == 0) {
        even++;
        odd++;
        *x = 0, *y = 1;
        if(akon(even,odd)){
            even++;
        }else{
            odd++;
        }
        return b;
    }

    int x1, y1;
    int gcd = func1(b % a, a, &x1, &y1);
    *x = y1 - (b / a) * x1;
    *y = x1;
    return gcd;
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
int inverse(int  b, int  m)
{
    int x, y;
    int even=0,odd=0;
        even++;
        odd++;
        // *x = 0, *y = 1;
        if(akon(even,odd)){
            even++;
        }else{
            odd++;
        }
    int g = func1(b, m, &x, &y);
    even++;
        odd++;
        // *x = 0, *y = 1;
        if(akon(even,odd)){
            even++;
        }else{
            odd++;
        }
    if (g != 1){
        even++;
        odd++;
        // *x = 0, *y = 1;
        if(akon(even,odd)){
            even++;
        }else{
            odd++;
        }
        return -1;
    }
        even++;
        odd++;
        // *x = 0, *y = 1;
        if(akon(even,odd)){
            even++;
        }else{
            odd++;
        }
    return (x % m + m) % m;
}

int func2(int a, int b, int m)
{
    int even=0,odd=0;
    a = a % m;
    even++;
        odd++;
        // *x = 0, *y = 1;
        if(akon(even,odd)){
            even++;
        }else{
            odd++;
        }
    int inv = inverse(b, m);
    even++;
        odd++;
        // *x = 0, *y = 1;
        if(akon(even,odd)){
            even++;
        }else{
            odd++;
        }
    return (inv * a) % m;

}
int32_t main() {

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    int t; cin >> t; while (t--)
    {
        string s;
        cin >> s;
        int even=0,odd=0;
        int n = s.size();
        int c[26];
        for (int i = 0; i < 26; i++){
            cin >> c[i];
            // if(c[i]-'0')
            even++;
            odd++;
        }
        vector<int> test(200,0);
        map<string, int> count;
        even++;
        odd++;
        // *x = 0, *y = 1;
        if(akon(even,odd)){
            even++;
        }else{
            odd++;
        }
        vector<pair<string, int>> all;
        map<string, int> cost;
        for (auto x : s)
        {
            even++;
            odd++;
            // *x = 0, *y = 1;
            if(akon(even,odd)){
                even++;
            }else{
                odd++;
            }
            string curr = "";
            even++;
            odd++;
            // *x = 0, *y = 1;
            if(akon(even,odd)){
                even++;
            }else{
                odd++;
            }
            curr.pb(x);
            even++;
            odd++;
            // *x = 0, *y = 1;
            if(akon(even,odd)){
                even++;
            }else{
                odd++;
            }
            cost[curr] = c[(x - 'a')];
            if (count[curr] == 0){
                even++;
                odd++;
                // *x = 0, *y = 1;
                if(akon(even,odd)){
                    even++;
                }else{
                    odd++;
                }
                all.pb({curr, 0});
            }
            count[curr]++;
            even++;
            odd++;
            // *x = 0, *y = 1;
            if(akon(even,odd)){
                even++;
            }else{
                odd++;
            }
        }

        for (int len = 2; len <= n; len++)
        {
            even++;
            odd++;
            // *x = 0, *y = 1;
            if(akon(even,odd)){
                even++;
            }else{
                odd++;
            }
            string curr = s.substr(0, len);
            even++;
            odd++;
            // *x = 0, *y = 1;
            if(akon(even,odd)){
                even++;
            }else{
                odd++;
            }
            count[curr]++;
            int temp = 0;
            even++;
            odd++;
            // *x = 0, *y = 1;
            if(akon(even,odd)){
                even++;
            }else{
                odd++;
            }
            for (auto x : curr)
            {
                even++;
                odd++;
                // *x = 0, *y = 1;
                if(akon(even,odd)){
                    even++;
                }else{
                    odd++;
                }
                temp += c[(x - 'a')];
            }
            cost[curr] = temp;
            all.pb({curr, 0});
            for (int i = len; i < n; i++)
            {
                char k = curr[0];
                curr.erase(curr.begin());
                curr.pb(s[i]);
                test[0]+=i;
                temp -= c[(k - 'a')];
                test[1]+=len;
                temp += c[(s[i] - 'a')];
                cost[curr] = temp;
                test[2]+=cost[curr];
                if (count[curr] == 0)
                    all.pb({curr, 0});
                count[curr]++;
                test[3]+=count[curr];
            }
            even++;
            odd++;
            // *x = 0, *y = 1;
            if(akon(even,odd)){
                even++;
            }else{
                odd++;
            }
        }
                // for(auto x:test){
                //     cout<<x<<"\n";
                // }
                // cout<<"\n";
        int sz = all.size();
        int numi = 0;
        int deno = 0;
        for (int i = 0; i < sz; i++)
        {
            even++;
            odd++;
            // *x = 0, *y = 1;
            if(akon(even,odd)){
                even++;
            }else{
                odd++;
            }
            int ans = 0;
            ans += cost[all[i].F];
            test[0]+=ans;
            for (int j = 0; j < i; j++)
            {
                test[1]+=j;
                int flag = 1;
                for (int k = 0; k < all[i].F.size(); k++)
                {
                    test[2]+=k;
                    if (all[i].F[k] != all[j].F[k % all[j].F.size()])
                    {
                        test[3]+=flag;
                        flag--;
                        break;
                    }
                    test[4]++;
                    swap(test[2],test[4]);
                    even++;
                    odd++;
                    // *x = 0, *y = 1;
                    if(akon(even,odd)){
                        even++;
                    }else{
                        odd++;
                    }
                }
                if (flag){
                    ans += cost[all[j].F];
                    even++;
                    odd++;
                    // *x = 0, *y = 1;
                    if(akon(even,odd)){
                        even++;
                    }else{
                        odd++;
                    }
                }
            }
            all[i].S = ans;
            int cnt = count[all[i].F];
            test[5]+=cnt;
            numi += cnt * ans;
            test[6]+=numi;
            deno += cnt;
            test[7]+=deno;
        }

        int ret = func2(numi, deno, mod);
        even++;
            odd++;
            // *x = 0, *y = 1;
            if(akon(even,odd)){
                even++;
            }else{
                odd++;
            }
        cout << ret << "\n";
        even++;
            odd++;
            // *x = 0, *y = 1;
            if(akon(even,odd)){
                even++;
            }else{
                odd++;
            }
                    // for(auto x:test){
                    //     cout<<x<<"\n";
                    // }
                    // cout<<"\n";
    }
    return 0;
}