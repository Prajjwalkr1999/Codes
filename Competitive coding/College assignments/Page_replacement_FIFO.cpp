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
    
    // ll t;cin>>t;while(t--)
    {
        ll n,capacity;
        // Enter no. of pages
        cin >> n;
        // Enter all pages 
        ll page[n];
        for (ll i = 0; i < n; i++) {
            cin >> page[i];
        }
        // Enter the capacity 
        cin>>capacity;
        unordered_set<ll> s;
        queue<ll> q;
        ll fault=0;

        for(ll i=0;i<n;i++){
            if(s.size()<capacity && (s.find(page[i])==s.end())){
                s.insert(page[i]);
                fault++;
                q.push(page[i]);
            }else{
                if(s.find(page[i])==s.end()){
                    ll old=q.front();
                    q.pop();
                    q.push(page[i]);
                    s.erase(old);
                    fault++;
                    s.insert(page[i]);
                }
            }
        }
        cout<<"Number of Page faults = "<<fault<<"\n";


    }
}

