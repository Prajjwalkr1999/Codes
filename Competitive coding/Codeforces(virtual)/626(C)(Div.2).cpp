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
    
    // int t;cin>>t;while(t--)
    {
        int i,j,n;
        cin >> n;
        string s;
        cin>>s;
        int cnt=0,sum=0;
        for(auto x:s){
            if(x=='('){
                cnt++;
            }else{
                cnt--;
            }
        }

        if(cnt!=0){
            cout<<-1<<"\n";
            return 0;
        }
        int ans=0,flag=0;
        sum=0;
        cnt=0;
        for(i=0;i<n;i++){
            if(s[i]=='('){
                sum++;
            }else{
                sum--;
            }
            if(sum<0){
                cnt++;
                flag=1;
            }
            if(flag){
                if(sum==0){
                    cnt++;
                    // cout<<cnt<<endl;
                    ans+=cnt;
                    cnt=0;
                    flag=0;
                }
            }
        }

        cout<<ans<<'\n';



    }
    return 0;
}

