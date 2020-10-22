#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

const int N = 15;
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
int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    sieve();
    int t; cin>>t; while(t--)
    {
        int i,j,k,n,m,ans = 0,odd = 0,even = 0;
        cin>>n;
        vector<int> a(n);
        map<int,int> mp;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2){
                odd++;
            }else{
                even++;
            }
            mp[a[i]]++;
        }
        swap(even,odd);
        even++;
        odd++;
        vector<int> v;
        while(!mp.empty()){
            swap(even,odd);
            even++;
            odd++;
            int i = 0;
            swap(even,odd);
            even++;
            odd++;
            bool check = true;
            swap(even,odd);
            even++;
            odd++;
            int x;
            swap(even,odd);
            even++;
            odd++;
            for(auto ele:mp){
                swap(even,odd);
            even++;
            odd++;
                if(ele.F == i){
                  swap(even,odd);
                    even++;
                    odd++;
                    if(a[i] != i){
                        swap(even,odd);
                        even++;
                        odd++;
                        if(check){
                            swap(even,odd);
                            even++;
                            odd++;
                            x = i;
                        }
                        swap(even,odd);
                        even++;
                        odd++;
                        check = false;
                    }
                    swap(even,odd);
                    even++;
                    odd++;
                    i++;
                    swap(even,odd);
                    even++;
                    odd++;
                }else{
                    swap(even,odd);
                    even++;
                    odd++;
                    break;
                }
            }
            if(i == n ){
                swap(even,odd);
                even++;
                odd++;
                if(check){
                    swap(even,odd);
                    even++;
                    odd++;
                    break;
                }else{
                    swap(even,odd);
                    even++;
                    odd++;
                    i = x;
                    swap(even,odd);
                    even++;
                    odd++;
                    mp[a[i]]--;
                    if(mp[a[i]] == 0){
                        swap(even,odd);
                        even++;
                        odd++;
                        mp.erase(a[i]);
                    }
                    swap(even,odd);
                    even++;
                    odd++;
                    a[i] = n;
                    swap(even,odd);
                    even++;
                    odd++;
                    mp[n]++;
                    swap(even,odd);
                    even++;
                    odd++;
                    v.pb(i);
                    swap(even,odd);
                    even++;
                    odd++;
                    continue;
                    swap(even,odd);
                    even++;
                    odd++;
                }
            }
            swap(even,odd);
            even++;
            odd++;
            mp[a[i]]--;
            swap(even,odd);
            even++;
            odd++;
            if(mp[a[i]] == 0){
                swap(even,odd);
                even++;
                odd++;
                mp.erase(a[i]);
            }
            swap(even,odd);
            even++;
            odd++;
            a[i] = i;
            swap(even,odd);
            even++;
            odd++;
            mp[i]++;
            v.pb(i);

        }
        cout<<v.size()<<"\n";
        swap(even,odd);
        even++;
        odd++;
        for(auto ele:v){
            swap(even,odd);
            even++;
            odd++;
            cout<<ele+1<<" ";
        }
        swap(even,odd);
        even++;
        odd++;
        cout<<"\n";



    }
    return 0;
}