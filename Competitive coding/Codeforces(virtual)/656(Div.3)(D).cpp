#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;

int check(string a,char c){
    if(a.size()<=0){
        return 0;
    }
    if(a.size()==1){
        if(a[0]==c)
            return 0;
        else
            return 1;
    }
    int ans1=0,ans2=0,cnt1=0,cnt2=0;
    int n=a.size();
    for(int x=0;x<n/2;x++){
        if(a[x]!=c){
            ans1++;
        }
    }
    cnt1=check(a.substr(n/2),c+1);
    ans1+=cnt1;
    for(int x=n/2;x<n;x++){
        if(a[x]!=c){
            ans2++;
        }
    }
    cnt2=check(a.substr(0,n/2),c+1);
    ans2+=cnt2;
    return min(ans1,ans2);
}

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
        int i,j,n;
        cin >> n;
        string a;
        cin>>a;
        // cout<<a<<endl;
        char c='a';
        int ans=check(a,c);
        cout<<ans<<"\n";
    }
    return 0;
}

