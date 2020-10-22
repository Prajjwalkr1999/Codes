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
        vector<ll> a(4*n);
        map<ll, ll> mp;
        for ( i = 0; i <(4*n); i++) {
            cin >> a[i];
            mp[a[i]]++;
        }

        if(mp.size()>(2*n)){
            cout<<"NO\n";
            continue;
        } 
        // cout<<1;

        sort(a.begin(),a.end());
        j=(4*n)-1;
        cnt=a[0]*a[(4*n)-1];
        for(i=0;i<(2*n);i+=2,j-=2){
            if((a[i]==a[i+1])&&(a[j]==a[j-1])){
                ans=a[i]*a[j];
                if(ans!=cnt){
                    flag=0;
                    break;
                }
            }else{
                flag=0;
                break;
            }
        }
        if(flag==0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}

