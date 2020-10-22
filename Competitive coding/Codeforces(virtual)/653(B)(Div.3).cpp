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
        int i,j,n;
        cin >> n;
        if(n==1){
            cout<<0<<"\n";
            continue;
        }
        if(n<6&&n!=3){
            cout<<-1<<"\n";
            continue;
        }
        if(n%3!=0){
            cout<<-1<<"\n";
            continue;
        }
        int cnt=0,flag=0;
        while(n!=1){
            if(n==1){
                break;
            }
            if(n%3!=0&&n!=1){
                flag++;
                break;
            }
            if(n%6==0){
                n=n/6;
                cnt++;
                continue;
            }
            n=n*2;
            cnt++;
        }
        if(flag){
            cout<<-1<<"\n";
            continue;
        }
        cout<<cnt<<"\n";

    }
    return 0;
}

