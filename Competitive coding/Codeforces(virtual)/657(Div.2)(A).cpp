#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;


int check(string &pat, string &txt) 
{ 
    int M = pat.length(); 
    int N = txt.length(); 
    int res = 0; 
    for (int i = 0; i <= N - M; i++) 
    { 
        int j; 
        for (j = 0; j < M; j++) 
            if (txt[i+j] != pat[j]) 
                break; 
   
        if (j == M)   
        { 
           res++; 
           j = 0; 
        } 
    } 
    return res; 
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
        string s="abacaba";
        j=0;
        int ans=check(s,a);
        // cout<<ans<<"\n";
        for(i=0;i<n&&(ans==0);i++){
            if((a[i]==s[j]||a[i]=='?')&&j<s.size()){
                if(a[i]=='?'){
                    a[i]=s[j];
                }
                j++;
            }else{
                j--;
            }
        }
        for(i=0;i<n;i++){
            if(a[i]=='?'){
                a[i]='z';
            }
        }
        ans=check(s,a);
        if(ans==1){
            cout<<"YES\n";
            cout<<a<<"\n";
        }else{
            cout<<"NO\n";
        }

    }
    return 0;
}

