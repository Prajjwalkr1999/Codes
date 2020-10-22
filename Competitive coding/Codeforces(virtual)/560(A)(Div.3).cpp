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
        ll i, j, k,x,y,n, m, ans = 0, cnt = 0, sum = 0;
        string s;
        cin>>n>>x>>y;
        cin>>s;
        ll len=s.size()-1;
        cnt=s.size()-1;

        while(cnt>(n-x-1)){
            if(cnt==(len-y)&&s[len-y]!='1'){
                // cout<<cnt<<" "<<s[len-y]<<"\n";
                ans++;
            }
            if(cnt==(len-y)&&s[len-y]=='1'){
                cnt--;
                continue;
            }
            if(s[cnt]!='0'){
                // cout<<cnt<<" "<<s[cnt]<<"\n";
                ans++;
            }
            cnt--;
        }
        cout<<ans<<"\n";

    }
}

