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
        vector<int> a;
        vector<int> w(k);
        map<int,int> mp;
        vector<int> neg;
        for ( i = 0; i < n; i++) {
            int q;
            cin >> q;
            if(q>=0){
                a.pb(q);
            }else{
                neg.pb(q);
            }
        }
        for(i=0;i<k;i++){
            cin>>w[i];
            // mp[w[i]]++;
        }
        vector<int> temp;
        temp=w;
        sort(temp.begin(), temp.end());
        sort(neg.rbegin(),neg.rend());
        sort(a.rbegin(),a.rend());
        sort(w.begin(), w.end());
        int ptr=0,ans=0,max;
        int z=w[k-1];
        int y=0,flag=0;
        vector<vector<int>> val(z,vector<int> (k,0));
        int x=0;
        int maxi=k-1;
        int l=0;
        int b=k-1;
        while(l<neg.size()){

        for( i=w[b];i>=0;i--){
                val[maxi][i]=neg[l];
                l++;
            }
            w[b]=i;
            b--;
        }
        for(i=0;i<z;i++){
            for(j=ptr;j<k;j++){
                val[i][j]=a[x];
                x++;
                w[j]--;
                if(w[j]==0){
                    flag++;
                    y=j+1;
                }
            }
            if(flag)
            ptr=y;
        }
     
        for(i=0;i<k;i++){
            int maxm=val[0][i];
            int minm=val[temp[i]-1][i];
            ans+=maxm+minm;
                 }
        cout<<ans<<"\n";
        
    }
    return 0;
}

