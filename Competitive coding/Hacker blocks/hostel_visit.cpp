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
     priority_queue<ll,vector<ll>,greater<ll>> pq;
     ll t;
     cin>>t;
     ll k;
     cin>>k;
     ll v[k];
     while(t--)
    {
       ll q,x,y;
       
       cin>>q;
       if(q==1){
        cin>>x>>y;
        ll dist;
        dist=((x*x)+(y*y));
        pq.push(dist);
       }
       if(q==2){
       
        ll i=0;
        ll last;
        while(i<k){
        last=pq.top();
        v[i]=last;
        pq.pop();
        i++;
        }
        ll j=0;
        while(j<k){
            pq.push(v[j]);
            j++;
        }
        cout<<last<<endl;
       }

    }
}

