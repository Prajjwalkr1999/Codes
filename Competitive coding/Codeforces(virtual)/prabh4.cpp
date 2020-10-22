#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int32_t main(){

        ios_base:: sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
    
        #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
        #endif
    
    int t; cin>>t; while(t--)
    {
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;

        // int n=a.size();
        int flag=0;
            for(int i=0;i<n;i++)
            {
                if(b[i]<a[i])
                {
                    flag++;
                    break;
                }
            }
            if(flag)
            {
                cout<<"-1\n";
                continue;
            }


           vector<set<char>> m(22);

            for(int i=0;i<n;i++)
            {
                if(b[i]==a[i])
                    continue;
                m[a[i]-'a'].insert(b[i]);
            }

            int count=0;
            for(int i=0;i<22;i++)
            {
                if(m[i].size()==0)
                    continue;
                
                    auto gg=m[i].begin();
                    m[i].erase(m[i].begin());
                    char curr=(*gg);
                    count++;
                    for(auto x:m[i])
                    {
                        m[curr-'a'].insert(x);
                    }
            }
            cout<<count<<"\n";


            
    }
    return 0;
}