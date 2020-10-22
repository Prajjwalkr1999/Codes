#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    // ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        std::vector<ll> a(n);
        std::vector<ll> b(n);
        std::vector<ll> c(n);
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        for ( i = 0; i < n; i++) {
            cin >> b[i];
            c[i]=a[i]-b[i];
        }
        sort(c.begin(),c.end());
        
        i=0;
        j=n-1;
        while(i<j){
            if((c[i]+c[j])>0){
                cnt+=(j-i);
                j--;
            }else{
                i++;
            }
        }
        cout<<cnt<<"\n";
    }
}

