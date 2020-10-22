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
        vector<int> a(n);
        ll count=1;
        for(int i=0;i<n;i++){
            a.pb(1);
        }
       for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        } 
        ll x=n;
        while(x--){
            count++;
            if(count<n){
            for(int j=1;j<count;j++){
                a[j]=a[j-1]+a[j];
            }
        }
        }

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }


    }
}

