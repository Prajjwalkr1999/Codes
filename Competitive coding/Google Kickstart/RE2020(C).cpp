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
    
    int t;cin>>t;int tc=1;while(t--)
    {
        int i,j,n;
        cin >> n;
        int sum=0;
        vector<int> e(n);
        vector<int> r(n);
        int ans=0;
        for ( i = 0; i < n; i++) {
            cin >> e[i]>>r[i];
            sum+=e[i];
        }
        if(n==1){
            cout<<"Case #"<<tc<<": "<<0<<" "<<e[0]<<"\n";
            continue;
        }
        vector<int> er;
        er=e;
        vector<int> rr;
        rr=r;
        bool flag=true;
        while(flag){
            flag=false;
            for(int i=0;i<n;i++){
                if(e[i]==0&&r[i]==0){
                    continue;
                }
                if(sum-e[i]<r[i]){
                    ans++;
                    // cout<<sum<<endl;
                    sum=sum-e[i];
                    e[i]=0;
                    r[i]=0;
                    flag=true;
                    // cout<<sum<<endl;
                }
            }
            if(ans==n-1||ans==n){
                ans=0;
                break;
            }
        }
        flag=true;
        if(ans==0){
            for(int i=0;i<n;i++){
                sum+=er[i];
            }
        }else{
            for(int i=0;i<n;i++){
                sum+=e[i];
            }
        }
        j=0;
        int res=0;
        bool ind=false,in=false;
        while(flag&&ans==0){
            i=i%n;
            if(j==2*n){
                ind=true;
                break;
            }
            if(er[i]==0&&rr[i]==0){
                i++;
                j++;
                continue;
            }
                // cout<<sum<<endl;
            if(sum-er[i]>=rr[i]){
                res+=er[i];
            }else{
                in=true;
            }
            i++;
            j++;
        }

        while(flag&&ans!=0){
            i=i%n;
            if(j==2*n){
                ind=true;
                break;
            }
            if(e[i]==0&&r[i]==0){
                i++;
                j++;
                continue;
            }
            if(sum-e[i]>=r[i]){
                res+=e[i];
            }else{
                flag=false;
            }
            i++;
            j++;
        }

        if(ind&&!in){
            cout<<"Case #"<<tc<<": "<<ans<<" "<<"INDEFINITELY\n";
        }else{
            cout<<"Case #"<<tc<<": "<<ans<<" "<<res<<"\n";
        }
        tc++;
    }
    return 0;
}

