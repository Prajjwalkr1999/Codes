#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
#define pi 3.14159265358979323846

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
        ld i, j, k, n, m,  cnt = 0, sum = 0;
        cin >> n;
        // n*=2.0;
        ld p=(pi/(4*n));
        ld x=sin(p);
        ld ans=(1.0/(x));
        cout<<setprecision(9)<<(ans/2)<<"\n";

    }
}

