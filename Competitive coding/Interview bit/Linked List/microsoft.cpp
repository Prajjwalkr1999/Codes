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
        // cin >> n;
        string s;
        cin>>s;
        // vector<int> a(n);
        string a="";string b="";string c="";
        int flag1=0,flag2=0;
        for ( i = 0; i < s.size(); i++) {
            if(s[i]=='+'){
                flag1=1;
                continue;
            }
            if(s[i]=='='){
                flag2=1;
                continue;
            }

            if(flag1==0&&flag2==0){
                a+=s[i];
                continue;
            }
            if(flag1==1&&flag2==0){
                b+=s[i];
                continue;
            }
            if(flag1==1&&flag2==1){
                c+=s[i];
                continue;
            }
        }
        if(a!="X"&&b!="X"){
            int x=stoi(a);
            int y=stoi(b);
            int ans=x+y;
            cout<<ans<<endl;
            return 0;
        }
        if(b!="X"&&c!="X"){
            int x=stoi(b);
            int y=stoi(c);
            int ans=y-x;
            cout<<ans<<endl;
            return 0;
        }
        if(a!="X"&&c!="X"){
            int x=stoi(a);
            int y=stoi(c);
            int ans=y-x;
            cout<<ans<<endl;
            return 0;
        }

    }
    return 0;
}

