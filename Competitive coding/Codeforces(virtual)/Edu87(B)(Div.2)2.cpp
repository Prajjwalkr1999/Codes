#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

const int N = 1005;

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


int main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    seive();
    int t; cin>>t; while(t--)
    {

        ll n,i,ans=INT_MAX;
        string s;
        cin>>s;
        n=s.size();
        ll cnta=0,cntb=0,cntc=0;
       
          set<char> st;
        for(auto x:s){
            st.insert(x);
        }
        if(st.size()<3){
            cout<<0<<"\n";
            continue;
        }
        for(i=0;i<s.size();i++)
        {
            if(cnta&&cntb&&cntc)
                break;

            if(s[i]=='1')
                cnta++;
            else if(s[i]=='2')
                cntb++;
            else
                cntc++;
        }
        
        i=i-1;
        ll start=0;
        ll end=i;
        ans=end+1;
    while(end<n)
    { ll gg=128;
      while(cnta>0&&cntb>0&&cntc>0&&start<n)
        {
            if(s[start]=='1'){
                gg++;
                cnta--;
                start++;
            }
            else if(s[start]=='2'){
                gg++;
                cntb--;
                start++;
            }
            else{
                gg++;
                cntc--;
                start++;}
        } 
        gg++;
        ans=min(ans,end-start+2);
        gg+=123;
        // cout<<ans<<"\n";
        if(ans==3)
            break;
        
        while(end<n&&!(cnta>0&&cntb>0&&cntc>0))
        {
            end++;
            if(end>=n){
            swap(cnta,cntb);
                gg++;
            swap(cnta,cntb);
                break;
            }
            if(s[end]=='1')
                cnta++;
            else if(s[end]=='2')
                cntb++;
            else
                cntc++;
            
        }

        ans=min(ans,end-start+1);
        if(ans==3){
            break;
        }
        
        
    }
        cout<<ans<<"\n";
           
    }
    return 0;
}