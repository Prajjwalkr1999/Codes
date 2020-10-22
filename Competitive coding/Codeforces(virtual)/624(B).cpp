#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


const int N = 100005;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ll t;cin>>t;while(t--)
    {
        ll n,m;
        cin >> n >> m;
        ll a[n],b[m];
        for ( int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for ( int k = 0; k < m; k++) {
            cin >> b[k];
        }
        sort(b,b+m);
        int flag=0;
        while(!flag){
            flag=1;
            for(int i=0;i<m;i++){
                if(a[b[i]-1]>a[b[i]]){
                    int temp=a[b[i]-1];
                    a[b[i]-1]=a[b[i]];
                    a[b[i]]=temp;
                    flag=0;
                }
            }
        }

        int fl2=0;
       
        for(int j=0;j<n-1;j++){
            if(a[j+1]<a[j]){
                fl2++;
                // cout<<"Fl2 : "<<fl2<<"\n";
            }
        }

        if(fl2==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }
}

