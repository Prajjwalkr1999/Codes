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
        ll i, j, k, n, ans = 0, cnt = 0, sum = 0;
        cin >> n>>k;
        string s;
        char m;
        cin>>s;
        set<char> x;
        for ( i = 0; i < k; i++) {
            cin >> m;
            x.insert(m);
        }
        for(i=0;i<n;i++){
            // cout<<"!";
            sum=i;
            while((x.count(s[i]))&&i<n){
                i++;
            }
            cnt=i-sum;
            ans+=(cnt*(cnt+1))/2;
        }
        cout<<ans<<"\n";

    }
}

