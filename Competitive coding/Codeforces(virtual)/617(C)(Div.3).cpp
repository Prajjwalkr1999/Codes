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
        ll i, l=0, u=0, n, ansl=0, ans = INT_MAX, ansr = 0, flag = 0;
        cin >> n;
        string s;
        cin>>s;
        std::map<P, ll> mp;
        mp[{0,0}]=0;
        for(i=0;i<n;i++){
            if(s[i]=='L'){
                l--;
            }else if(s[i]=='R'){
                l++;
            }else if(s[i]=='U'){
                u++;
            }else if(s[i]=='D'){
                u--;
            }

            if(mp.find({l,u})!=mp.end()){
                ll curL=mp[{l,u}],curR=i;
                if((curR-curL)<ans){
                    ansl=curL+1;
                    ansr=curR+1;
                    ans=curR-curL;
                    flag=1;
                }
            }
            mp[{l,u}]=i+1;
        }

        if(flag==1)
            cout<<ansl<<" "<<ansr<<"\n";
        else
            cout<<-1<<"\n";
    }
}

