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
        ll i, cnt_l=0,cnt_u=0,cnt_r=0,cnt_d=0;
        string s;
        cin>>s;
        for(i=0;i<s.size();i++){
            if(s[i]=='L'){
                cnt_l++;
            }else if(s[i]=='R'){
                cnt_r++;
            }else if(s[i]=='U'){
                cnt_u++;
            }else if(s[i]=='D'){
                cnt_d++;
            }
        }
        ll ans_lr=min(cnt_l,cnt_r);
        ll ans_ud=min(cnt_u,cnt_d);
        if(min(ans_lr,ans_ud)==0){
            string ans;
            if(ans_lr==0){
                ans_ud=min(ans_ud,1ll);
                cout<<(2*ans_ud)<<"\n";
                for(i=0;i<ans_ud;i++){
                    ans.pb('U');
                }
                for(i=0;i<ans_ud;i++){
                    ans.pb('D');
                }
                // cout<<ans.size()<<"\n";
                // if(ans.size()>0)
                cout<<ans<<"\n";
            }else{
                ans_lr=min(ans_lr,1ll);
                cout<<(2*ans_lr)<<"\n";
                for(i=0;i<ans_lr;i++){
                        ans.pb('L');
                    }
                    for(i=0;i<ans_lr;i++){
                        ans.pb('R');
                    }
                    cout<<ans<<"\n";
            }
            continue;
        }
        string ans;
        for(i=0;i<ans_lr;i++){
            ans.pb('L');
        }
        for(i=0;i<ans_ud;i++){
            ans.pb('U');
        }
        for(i=0;i<ans_lr;i++){
            ans.pb('R');
        }
        for(i=0;i<ans_ud;i++){
            ans.pb('D');
        }
        cout<<ans.size()<<"\n";
        if(ans.size()>0)
        cout<<ans<<"\n";
    }
}

