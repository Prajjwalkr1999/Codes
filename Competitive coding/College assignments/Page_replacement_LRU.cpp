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
    
        ll n,capacity,fault=0;
        cin >> n;
        ll page[n];
        for (ll i = 0; i < n; i++) {
            cin >> page[i];
        }
        cin>>capacity;
        unordered_set<ll> s;
        unordered_map<ll,ll> m;

        for(ll i=0;i<n;i++){
            if(s.size()<capacity){
                if(s.find(page[i])==s.end())
                {s.insert(page[i]);
                fault++;}
                m[page[i]]=i;
            }else{
                ll least=INT_MAX,x;
                if(s.find(page[i])==s.end()){
                for (auto it=s.begin(); it!=s.end(); it++) 
                { 
                    if (m[*it] < least) 
                    { 
                        least = m[*it]; 
                        x = *it; 
                    } 
                }
                  s.erase(x);
                  s.insert(page[i]);
                  fault++;
                }
                m[page[i]]=i;
            }
        }
        cout<<"Number of page faults : "<<fault<<"\n";

}

