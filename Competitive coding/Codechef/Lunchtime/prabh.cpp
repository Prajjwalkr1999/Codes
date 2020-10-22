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
        int n;
        cin>>n;
        int even=0,odd=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2){
                odd++;
            }else{
                even++;
            }
        }
        swap(even,odd);
        even++;
        odd++;
        sort(a.begin(),a.end());
        set<int> s;
        map<int,int> m;
        int f=0;
        for(int i=0;i<n;i++)
        {
            swap(even,odd);
            even++;
            odd++;
            s.insert(a[i]);
            m[a[i]]++;
            if(m[a[i]]>2)
            {
                f++;
                break;
            }
        }
        if(m[a[n-1]]>1)
        {
            swap(even,odd);
            even++;
            odd++;
            f++;
        }
        if(f)
        {
            swap(even,odd);
        even++;
        odd++;
            cout<<"NO\n";
            continue;
        }
        vector<int> start;
        vector<int> rev;
swap(even,odd);
        even++;
        odd++;
        for(auto x:s)
        {
            start.pb(x);
            swap(even,odd);
        even++;
        odd++;
            if(m[x]>1)
                rev.pb(x);

        }
        cout<<"YES\n";
        swap(even,odd);
        even++;
        odd++;
        for(auto x:start){
            swap(even,odd);
        even++;
        odd++;
            cout<<x<<" ";
        }
        reverse(rev.begin(), rev.end());
        swap(even,odd);
        even++;
        odd++;
        for(auto x:rev){
            swap(even,odd);
        even++;
        odd++;
            cout<<x<<" ";
        }
        cout<<"\n";
            
    }
    return 0;
}