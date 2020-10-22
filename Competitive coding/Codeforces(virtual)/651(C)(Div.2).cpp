#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;

vector<P> factors;
void factorisation(int n) {
    factors.clear();
    // check by 2
    if (n % 2 == 0) {
        int cnt = 0;
        while (n > 1 && n % 2 == 0) {
            n /= 2;
            cnt++;
        }
        factors.pb({2, cnt});
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            int cnt = 0;
            while (n > 1 && n % i == 0) {
                n /= i;
                cnt++;
            }
            factors.pb({i, cnt});
        }
    }
    if (n > 1) {
        factors.pb({n, 1});
    }
}
int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int t;cin>>t;while(t--)
    {
        int i,j,n;
        cin >> n;
        // vector<int> a(n);
        // for ( i = 0; i < n; i++) {
        //     cin >> a[i];
        // }
        if(n==1){
            cout<<"FastestFinger\n";
            continue;
        }
        if(n==2||n%2){
            cout<<"Ashishgup\n";
            continue;
        }
        factorisation(n);
        int cnt2=0,cnt=0;
        for(auto x:factors){
            if(x.F==2){
                cnt2+=x.S;
            }else{
                cnt+=x.S;
            }
            // if(cnt>1){
            //     break;
            // }
        }
        // cout<<cnt<<" "<<cnt2<<"\n";
        if(cnt==1&&cnt2==1){
            cout<<"FastestFinger\n";
        }else if(cnt==0){
            cout<<"FastestFinger\n";
        }else{
            cout<<"Ashishgup\n";
        }
        
    }
    return 0;
}

