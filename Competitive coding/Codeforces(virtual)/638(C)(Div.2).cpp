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
        ll i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n>>k;
        string s;
        cin>>s;
        string t;
        t=s;
        sort(t.begin(),t.end());
        if(t[0]!=t[k-1]){
            cout<<t[k-1]<<"\n";
            continue;
        }
        cout<<t[0];
        if(t[k]!=t[n-1]){
            for(i=k;i<n;i++){
                cout<<t[i];
            }
        }else{
            // Dividing the remaining equal characters into k slides
            ll size=(n-k-1)/k +1;
            for(i=0;i<size;i++){
                cout<<t[n-1];
            }
        }
        cout<<"\n";
    }
}

