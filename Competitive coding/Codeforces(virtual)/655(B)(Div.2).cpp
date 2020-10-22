#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;

bool isprime(int num){
    bool flag=true;
    for(int i = 2; i*i <= num; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
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
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<"\n";
            continue;
        }
        if(isprime(n)){
            cout<<1<<" "<<n-1<<"\n";
            continue;
        }
        int cnt=0;
        for(i=3;i*i<=n;i++){
            if(n%i==0){
                cnt=i;
                break;
            }
        }
        int ans1=(n/i);
        int ans2=(n/i)*((cnt-1));
        cout<<ans1<<" "<<ans2<<"\n";
    }
    return 0;
}

