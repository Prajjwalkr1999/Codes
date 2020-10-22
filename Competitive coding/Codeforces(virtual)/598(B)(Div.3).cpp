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
    
    ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, flag = 1;
        cin >> n;
        vector<ll> a(n);
        // vector<ll> s(n+1);
        vector<ll> ind(n+1);
        for ( i = 0; i <n; i++) {
            cin >> a[i];
        }
        if(n==1){
            cout<<1<<"\n";
            continue;
        }
        for (i = 0; i < n; ++i)
        {
             for ( j = n-1; j >=1; j--) {
                        if(a[j]<a[j-1] && ind[j-1]==0){
                            swap(a[j],a[j-1]);
                            ind[j-1]=1;
                        }
                    }
        }
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";

    }
}

