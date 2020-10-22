#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int size = 8; 
int disk_size = 200; 

int main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    // ll t;cin>>t;while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        ll head;
        cin>>head;
        string direction;
        cin>>direction;

    int count = 0; 
    int dis, cur; 
    vector<int> l, r; 
    vector<int> seekseq; 

    if (direction == "left") 
        l.push_back(0); 
    else if (direction == "right") 
        r.push_back(disk_size - 1); 
  
    for (int i = 0; i < size; i++) { 
        if (arr[i] < head) 
            l.push_back(arr[i]); 
        if (arr[i] > head) 
            r.push_back(arr[i]); 
    }  
    sort(l.begin(), l.end()); 
    sort(r.begin(), r.end()); 
    int run = 2; 
    while (run--) { 
        if (direction == "left") { 
            for (int i = l.size() - 1; i >= 0; i--) { 
                cur = l[i]; 
                seekseq.push_back(cur); 
                dis = abs(cur - head); 
                count += dis; 
                head = cur; 
            } 
            direction = "right"; 
        } 
        else if (direction == "right") { 
            for (int i = 0; i < r.size(); i++) { 
                cur = r[i]; 
                seekseq.push_back(cur); 
                dis = abs(cur - head); 
                count += dis; 
                head = cur; 
            } 
            direction = "left"; 
        } 
    } 
    cout<<endl;
    cout << "Total number of seek operations = "<< count << endl; 
    cout<<endl;
    cout << "Seek Sequence is : " << endl; 
  
    for (int i = 0; i < seekseq.size(); i++) { 
        cout << seekseq[i] <<" "; 
    }
     cout<<endl;

    }
}

