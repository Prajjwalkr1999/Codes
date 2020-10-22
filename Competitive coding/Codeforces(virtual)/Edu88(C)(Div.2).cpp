#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back


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
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    seive();
    ll t;cin>>t;while(t--)
    {
        ld i, j, k, n, h,c,t, ans = 0, sum = 0;
        ll cnt=1;
        cin>>h>>c>>t;
        if(h==t){
            cout<<1<<"\n";
            continue;
        }
        if((h+c)/2>=t){
            cout<<2<<"\n";
            continue;
        }
        ld jump=(h-t)/((2*t)-(h+c));
        ld jumpe=floor(jump);
        ld absn=1e6+7;
        ld pub=0;
        for(i=jumpe-8;i<jumpe+8;i++){
            if(i<0)
            {
                pub++;
                continue;
            }
                pub=jump/jumpe;
                pub++;
                ld temp=(h*i+c*i)+h;
                temp/=(2*i+1);
                pub=jump/temp;
                ld absa=abs(temp-t);
                if(absa<absn){
                    ans=2*i+1;
                    absn=absa;
                    pub=jumpe;
                }
            
        }
        cout<<ans<<"\n";
    }
}

