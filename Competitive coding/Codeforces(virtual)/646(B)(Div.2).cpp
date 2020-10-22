#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 105;
int pr[N];
vector<int> primes;

void seive() {
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
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    seive();
    ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, ans = 0, cnt = 0, srt = 0,flag=0;
        ll zero=0,one=0,sum=0;
        string s;
        cin>>s;
        n=s.size();
        // for(i=0;i<n;i++){
        //     if(s[i]!=s[i+1]&&flag==0){
        //         flag=1;
        //         continue;
        //     }
        //     if(s[i]!=s[i+1]&&flag==1){
        //         ans=1;
        //     }
        // }
        // if(!ans){
        //     cout<<0<<"\n";
        //     continue;
        // }
        ans=0;
        for(i=0;i<n-1;i++){
            // if(s[0]==s[i+1]){
            //     while(i<n-1&&s[0]==s[i+1]){
            //         srt++;
            //         i++;
            //     }
            //     continue;
            // }
            if(s[i]=='0'){
                zero++;
            }else{
                one++;
            }
            if(s[i]!=s[i+1]){
                ans++;
            }
        }
        ans=min(zero,one);
       for(ll i=0;i<n;i++)
        {
            ll zero1=0,zero2=0,one1=0,one2=0;
            ll xy=0;
            xy=zero1;
            xy++;
            xy=one2;
            for(ll j=0;j<i;j++)
            {
                // cout<<"ithe";
                if(s[j]=='0')
                {
                    zero1++;
                }
                else one1++;
            }

            for(ll j=i;j<n;j++)
            {
                // cout<<s;
                xy=zero1;
                xy++;
                xy=one2;
                if(s[j]=='0')
                {
                    zero2++;
                }
                else one2++;

            }
            ll ans1=min(ans,xy);
            ans1+=1;
            ll pr=(zero1+one2);
            pr=min(pr,(zero2+one1));
            ans=min(pr,ans);
        }   
        cout<<ans<<'\n';
    }
}

