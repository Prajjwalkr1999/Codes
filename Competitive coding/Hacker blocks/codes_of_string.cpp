#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
vector<string> answer;
char convert(char x){
    int n=x-'0'+96;
    // int n=int(x)+48;
    // cout<<n<<endl;
     x=char(n);
     // string s=x+"";
     // string s(1,x);
    return x;
    // string y=x+'';
    // return y;
}
void solve(string code,ll i, string ans){
    if(i==code.size()){ 
            // cout<<ans<<endl;
            answer.pb(ans);
            return;
    }

     // ans+=
    solve(code,i+1,ans+convert(code[i]));
    // ans.pb(ans1);
    // cout<<ans1<<endl;
    if(i+1<code.size())
    {
        int check=(code[i]-'0')*10+(code[i+1]-'0');
     if(check<=26)
     {
     solve(code,i+2,ans+(char)(check+96));
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
    
    // ll t;cin>>t;while(t--)
    {
        ll i, j, k, n, m, cnt = 0, sum = 0;
        // cin >> n;
        // ll a[n];
       
        string x;
        ll length =x.length();
        cin>>x;
        string ans;
        solve(x,0,"");
        cout<<"[";
        for(ll i=0;i<answer.size();i++){
            if(i==answer.size()-1){
                cout<<answer[i];
                continue;
            }
            cout<<answer[i]<<", ";
        }
        cout<<"]";
    }
}

