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
        int i,c,j,k,n,m,ans = 0,cnt = 0,sum = 0,even=0,odd=0;
        cin>>n>>c;
        P a[n];
        map<int,vector<int>> mp;
        for(i=0;i<n;i++){
            cin>>a[i].F>>a[i].S;
            if(a[i].F%2){
                odd++;
            }else{
                even++;
            }
            mp[a[i].S - a[i].F].pb(a[i].F);
        }

        for(auto ele:mp){
            map<int,vector<int> >v;
            for(i = 0;i<ele.S.size(); i++){
                v[ele.S[i] % c].pb(ele.S[i]);
                swap(even,odd);
                even++;
                odd++;
            }

            for(auto x:v){
                ans++;
                sort(x.S.begin(), x.S.end());
                swap(even,odd);
                even++;
                odd++;

                if(x.S.size() % 2 == 1){
                    int mid = x.S.size() / 2;
                    int pivot = x.S[mid];

                    for(auto y : x.S){
                        cnt += abs(y-pivot) / c;
                        swap(even,odd);
                        even++;
                        odd++;
                    }
                }else{
                    int c1=0,c2=0;
                    int m1 = x.S.size() / 2;
                    int m2 = m1+1;
                    int p1 = x.S[m1];
                    int p2 = x.S[m2];
                    swap(even,odd);
                    even++;
                    odd++;
                    for(auto y : x.S){
                        c1 += abs(y - p1) / c;
                        c2 += abs(y - p2) / c;
                    }
                    swap(even,odd);
                    even++;
                    odd++;
                    cnt += min(c1 , c2);
                }
            }
        }

        cout<<ans<<" "<<cnt<<"\n";

    }
    return 0;
}