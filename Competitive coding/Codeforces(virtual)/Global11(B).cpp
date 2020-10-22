#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;


int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int t;cin>>t;while(t--)
    {
        int i,j,n,k;
        cin >> n>>k;
        string s;
        cin>>s;
        i=0;
        int st=0,en=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='W'){
                i++;ans++;
                while(i<n&&s[i]=='W'){
                    ans+=2;
                    i++;
                }
            }
        }
        if(ans==0){
            if(n>k){
                ans+=2*k-1;
            }else{
                ans+=2*n-1;
            }

            if(ans<0) ans=0;
            cout<<ans<<"\n";
            continue;
        }
        while(i<n&&s[i]!='W'){
            st++;
            i++;
        }
        i=n-1;
        while(i>=0&&s[i]!='W'){
            i--;
            en++;
        }
        bool flag=false;
        vector<int> res;
        for(int i=0;i<n;i++){
            if(flag==false&&s[i]=='W'){
                flag=true;
                continue;
            }
            if(s[i]=='L'&&flag){
                int idx=i,cnt=0;
                while(i<n&&s[i]!='W'){
                    i++;
                    cnt++;
                }
                if(i<n){
                    res.pb(cnt);
                }
            }
        }

        sort(res.begin(),res.end());

        for(auto x:res){
            if(x<=k){
                ans+=(2*x)+1;
                k-=x;
            }else{
                ans+=(2*k);
                k=0;
            }
        }

        // vector<int> onew;
        // flag=0;
        // for(int i=0;i<n;i++){
        //     if(s[i]=='W') flag++;
        //     if(s[i]=='L'&&flag){
        //         int cnt=0;
        //         while(i<n&&s[i]!='L'){
        //             cnt++;
        //         }
        //         flag=0;
        //         onew.pb(cnt);
        //     }
        // }
        if(k>0&&flag){
            if(st<=k){
                ans+=(2*st);
                k-=st;
            }else{
                ans+=(2*k);
                k=0;
            }
            if(en<=k&&k>0){
                ans+=(2*en);
                k-=en;
            }else if(k>0){
                ans+=(2*k);
                k=0;
            }
        }
        cout<<ans<<"\n";

    }
    return 0;
}

