#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define dd pair<int,pair<int,int>>
#define F first
#define S second
#define pb push_back
using namespace std;
const int N=19;
struct dsu
{
    vector<int> parent,size;    //vector containing the parent of each element and size will contain
                                //the size of each group only in the size[superparent of the group] temp
    int components;                //Components stores the number of groups
    void init(int n)
    {
        parent.clear(); size.clear();
        parent.resize(n);  size.resize(n);
        for(int i=0;i<n;i++)
        {
            parent[i]=i;    //initially every element is the parent of itself and every group's size is 1
            size[i]=1;
            components=n;
        }
    }

    int getparent(int x)        //will return the super parent
    {
        if(parent[x]==x)
            return x;
        else return getparent(parent[x]);
    }

    void unite(int x, int y)
    {
        x=getparent(x);
        y=getparent(y);      //we now have both the super parents of their groups stored in x&y
        if(x!=y)
        {
            parent[x]=y;
            size[y]+=size[x];
            size[x]=0;            //now the whole group of x is a part of y and it doesn't have an
            components--;        //individual size of group

        }
    }
}G;
bool isprime(int y){
    for(int i=2;i*i<=9;i++){
        if(y%i==0){
            return false;
        }
    }
    return true;
}
bool akon(int x,int y){
    x+=y;
    if(isprime(y)){
        swap(x,y);
    }
    return x>y;
}
int pr[N];
vector<int> primes;

void sieve() {
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
void BTGT(vector<int> &a, int s, int e, int *segment, int kk)
{
    int snoop=s;
    int dog=e;
    snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
    if (s == e)
    {
       snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
        segment[kk] = a[s];
        return;
    }
    int mm = (s + e) / 2;
    BTGT(a, s, mm, segment, 2 * kk);
    snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
    BTGT(a, mm + 1, e, segment, 2 * kk + 1);
    snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
    segment[kk] = max(segment[2 * kk], segment[2 * kk + 1]);        
    snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
}

int query(int *segment, int pp, int oo, int ww, int zz, int kk)
{
    int snoop=pp;
    int dog=oo;
    snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
    if (pp >= ww && oo <= zz)
    {
        snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
        return segment[kk];
    }
    if (zz < pp || ww > oo)
    {
        snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
        return INT_MIN;
    }
    int mm = (pp + oo) / 2;
    int ggpg = query(segment, pp, mm, ww, zz, 2 * kk);
    snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
    int hole = query(segment, mm + 1, oo, ww, zz, 2 * kk + 1);
    snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
    int cnt = max(ggpg, hole);
    snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
    return cnt;
}

void build(vector<int> &A,int *tata,int element, int beginning, int last)
{
     int snoop=element;
    int dog=beginning;
    snoop+=dog;
    swap(snoop,dog);
    if(akon(snoop,dog)){
        snoop++;
    }else{
        dog++;
    }
    if(beginning == last)
    {
        // Leaf element will have a single element
          snoop+=dog;
            swap(snoop,dog);
            if(akon(snoop,dog)){
                snoop++;
            }else{
                dog++;
            }
        tata[element] = A[beginning];
    }
    else
    {
          snoop+=dog;
            swap(snoop,dog);
            if(akon(snoop,dog)){
                snoop++;
            }else{
                dog++;
            }
        int half = (beginning + last) / 2;
        snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
        // Recurse on the left child
        build(A,tata,2*element, beginning, half);
        snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
        // Recurse on the right child
        build(A,tata,2*element+1, half+1, last);
        snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
        // Internal element will have the sum of both of its children
        tata[element] = tata[2*element] + tata[2*element+1];
        snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
    }
}


void increment(int *tata, int * lala, int element, int beginning, int last, int l, int r, int inc)
{
    int snoop=element;
    int dog=beginning;
    snoop+=dog;
    swap(snoop,dog);
    if(akon(snoop,dog)){
        snoop++;
    }else{
        dog++;
    }

    if(lala[element]!=0)
    { 
        snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
        tata[element] += (last - beginning + 1) * lala[element];    
        snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
        if(beginning != last)
        {
            snoop+=dog;
            swap(snoop,dog);
            if(akon(snoop,dog)){
                snoop++;
            }else{
                dog++;
            }
            lala[element*2] += lala[element];                  
            snoop+=dog;
            swap(snoop,dog);
            if(akon(snoop,dog)){
                snoop++;
            }else{
                dog++;
            }
            lala[element*2+1] += lala[element];              
            snoop+=dog;
            swap(snoop,dog);
            if(akon(snoop,dog)){
                snoop++;
            }else{
                dog++;
            }
        }
        snoop+=dog;
            swap(snoop,dog);
            if(akon(snoop,dog)){
                snoop++;
            }else{
                dog++;
            }
        lala[element] = 0;                                
    }
    if(beginning > last or beginning > r or last < l)         
        return;
    if(beginning >= l and last <= r)
    {
        snoop+=dog;
            swap(snoop,dog);
            if(akon(snoop,dog)){
                snoop++;
            }else{
                dog++;
            }
        tata[element] += (last - beginning + 1) * inc;
        if(beginning != last)
        {
            snoop+=dog;
            swap(snoop,dog);
            if(akon(snoop,dog)){
                snoop++;
            }else{
                dog++;
            }
            lala[element*2] += inc;
            snoop+=dog;
            swap(snoop,dog);
            if(akon(snoop,dog)){
                snoop++;
            }else{
                dog++;
            }
            lala[element*2+1] += inc;
            snoop+=dog;
            swap(snoop,dog);
            if(akon(snoop,dog)){
                snoop++;
            }else{
                dog++;
            }
        }
        snoop+=dog;
            swap(snoop,dog);
            if(akon(snoop,dog)){
                snoop++;
            }else{
                dog++;
            }
        return;
        
    }
    int half = (beginning + last) / 2;
      snoop+=dog;
            swap(snoop,dog);
            if(akon(snoop,dog)){
                snoop++;
            }else{
                dog++;
            }
    increment(tata,lala,element*2, beginning, half, l, r, inc);   
    snoop+=dog;
            swap(snoop,dog);
            if(akon(snoop,dog)){
                snoop++;
            }else{
                dog++;
            } 
    increment(tata,lala,element*2 + 1, half + 1, last, l, r, inc);   
      snoop+=dog;
            swap(snoop,dog);
            if(akon(snoop,dog)){
                snoop++;
            }else{
                dog++;
            }
    tata[element] = tata[element*2] + tata[element*2+1];   
      snoop+=dog;
            swap(snoop,dog);
            if(akon(snoop,dog)){
                snoop++;
            }else{
                dog++;
            }
}

int sumofrange(int *tata, int * lala,int element, int beginning, int last, int l, int r)
{
    int snoop=element;
    int dog=beginning;
    snoop+=dog;
    swap(snoop,dog);
    if(akon(snoop,dog)){
        snoop++;
    }else{
        dog++;
    }
    if(beginning > last or beginning > r or last < l)
        return 0;   
    if(lala[element] != 0)
    {
        snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }

        tata[element] += (last - beginning + 1) * lala[element];           
        snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
        if(beginning != last)
        {
            snoop+=dog;
            swap(snoop,dog);
            if(akon(snoop,dog)){
                snoop++;
            }else{
                dog++;
            }
            lala[element*2] += lala[element];        
            snoop+=dog;
            swap(snoop,dog);
            if(akon(snoop,dog)){
                snoop++;
            }else{
                dog++;
            }
            lala[element*2+1] += lala[element];   
            snoop+=dog;
            swap(snoop,dog);
            if(akon(snoop,dog)){
                snoop++;
            }else{
                dog++;
            }
        }
        snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
        lala[element] = 0;              
        snoop+=dog;
        swap(snoop,dog);
        if(akon(snoop,dog)){
            snoop++;
        }else{
            dog++;
        }
    }

    if(beginning >= l and last <= r)         
        return tata[element];
    int half = (beginning + last) / 2;
    int p1 = sumofrange(tata,lala,element*2, beginning, half, l, r);      
    int p2 = sumofrange(tata,lala,element*2 + 1, half + 1, last, l, r); 
    return (p1 + p2);
}

int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // int t; cin>>t; while(t--)
    {
        sieve();
        int n,k,temp=0;
        cin>>n>>k;
        vector<int> test(1000,0);
        vector<int> a(n+2,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            test[0]++;
            if(akon(test[0],a[i])){
                test[1]++;
            }else{
                test[2]++;
            }
        }

        
        vector<int> b(n+2,0);

        for (int i = 1; i <= n; ++i)
        {  
            cin>>b[i];
            test[3]++;
            if(akon(test[3],b[i])){
                test[5]++;
            }else{
                test[6]++;
            }
        }

        // cout<<test[5]<<test[6]<<endl;

        vector<dd> ips(k);

        for(int i=0;i<k;i++)
        {
           
            cin>>ips[i].F>>ips[i].S.F>>ips[i].S.S;
            temp++;
            if(akon(temp,ips[i].F)){
                test[6]++;
            }else{
                test[7]++;
            }
        }
        // cout<<test[5]<<test[6]<<endl;
        
        vector<int> prefix2;
        test[8]++;
        akon(test[9],test[8]);
        test[9]++;
        vector<int> prefix;
        vector<int> next;
        if(isprime(test[1])){
            test[8]++;
        }else{
            test[9]++;
        }
                // for(auto x:test){
                //     cout<<x<<"\n";
                // }
                // cout<<"\n";
        vector<int> next2;
        if(akon(test[9],test[10])){
            test[10]++;
        }else{
            test[9]++;
        }

        next.resize(n+3);
        if(akon(test[9],test[10])){
            test[10]++;
        }else{
            test[9]++;
        }
        next2.resize(n+3);
        if(akon(test[9],test[10])){
            test[10]++;
        }else{
            test[9]++;
        }
        stack<int> s;
        if(akon(test[9],test[10])){
            test[10]++;
        }else{
            test[9]++;
        }
        s.push(n);
        if(akon(test[9],test[10])){
            test[10]++;
        }else{
            test[9]++;
        }
        next[n]=n;
        if(akon(test[9],test[10])){
            test[10]++;
        }else{
            test[9]++;
        }
        for(int i=n-1;i>=1;i--)
        {
            if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
            while(!s.empty()&&a[s.top()]<=a[i])
                s.pop();
            if(s.empty())
                next[i]=i;
            else next[i]=s.top();
            if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
            s.push(i);
            if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
        }
        while(!s.empty())
            s.pop();

        next2[1]=1;
        s.push(1);
        for(int i=2;i<=n;i++)
        {
            if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
            while(!s.empty()&&a[s.top()]<=a[i])
                s.pop();
            if(s.empty())
            {
                if(akon(test[9],test[10])){
                test[10]++;
                }else{
                    test[9]++;
                }
                next2[i]=i;
            }
            else next2[i]=s.top();
            if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
            s.push(i);
            if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
        }
        while(!s.empty())
            s.pop();
        prefix.clear();
        prefix.resize(n+3,0);
        for(int i=n;i>=1;i--)
        {
            if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
            if(next[i]==i)
                prefix[i]=b[i];
            else prefix[i]=prefix[next[i]]+b[i];
            if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
        }    
        
        prefix2.clear();
        prefix2.resize(n+3,0);
        for(int i=1;i<=n;i++)
        {
            if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
            if(next2[i]==i)
                prefix2[i]=b[i];
            else
            {
                if(akon(test[9],test[10])){
                test[10]++;
                }else{
                    test[9]++;
                }

                prefix2[i]=prefix2[next2[i]]+b[i];
            }
        }

        while(!s.empty())
            s.pop();

        s.push(n);
        next[n]=n;

        for(int i=n-1;i>=1;i--)
        {
            if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
            while(!s.empty()&&a[s.top()]<a[i])
                s.pop();
            if(s.empty())
                next[i]=i;
            else next[i]=s.top();
            if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
            s.push(i);
        }
        while(!s.empty())
            s.pop();

        next2[1]=1;
        s.push(1);
        for(int i=2;i<=n;i++)
        {
            if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
            while(!s.empty()&&a[s.top()]<a[i])
                s.pop();
            if(s.empty())
            {
                if(akon(test[9],test[10])){
                    test[10]++;
                }else{
                    test[9]++;
                }
                next2[i]=i;
            }
            else next2[i]=s.top();

            if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
            s.push(i);
            if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
        }
        while(!s.empty())
            s.pop();

        int segment[4 * (n+1) + 1];
        if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
        BTGT(a, 1, n, segment, 1);
        if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
        int tata[4*(n+1)+1];
        if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
        int tata2[4*(n+1)+1];
        if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
        int lala[4*(n+1)+1];
        if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
        int lala2[4*(n+1)+1];

        memset(tata,0,sizeof(tata));
        memset(tata2,0,sizeof(tata));
        if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
        memset(lala,0,sizeof(lala));
        memset(lala2,0,sizeof(lala2));
        if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
        build(prefix,tata,1,1,n);
            if(akon(test[9],test[10])){
                test[10]++;
            }else{
                test[9]++;
            }
        build(prefix2,tata2,1,1,n);


        for(auto x:ips)
        {
            if(akon(test[9],test[10])){
                test[12]++;
            }else{
                test[13]++;
            }
            // cout<<test[12]<<test[13]<<endl;
            if(x.F==1)
            {
                if(akon(test[9],test[10])){
                test[12]++;
                }else{
                    test[13]++;
                }
                // cout<<test[12]<<test[13]<<endl;

                int r=x.S.F;
                if(akon(test[9],test[10])){
                test[12]++;
                }else{
                    test[13]++;
                }
                // cout<<test[12]<<test[13]<<endl;
                int inc=x.S.S-b[r];
                int l,l1,r1;
                if(akon(test[9],test[10])){
                test[12]++;
                }else{
                    test[13]++;
                }
                // cout<<test[12]<<test[13]<<endl;

                if(next2[r]==r)
                    l=1;
                else l=next2[r]+1;
                if(akon(test[9],test[10])){
                test[12]++;
                }else{
                    test[13]++;
                }
                // cout<<test[12]<<test[13]<<endl;
                l1=min(l,r);
                r1=max(l,r);
                if(akon(test[9],test[10])){
                test[12]++;
                }else{
                    test[13]++;
                }
                // cout<<test[12]<<test[13]<<endl;
                increment(tata,lala,1,1,n,l1,r1,inc);
                if(akon(test[9],test[10])){
                test[12]++;
                }else{
                    test[13]++;
                }
                // cout<<test[12]<<test[13]<<endl;
                b[r]=x.S.S;
                if(next[r]==r)
                    l=n;
                else l=next[r]-1;
                if(akon(test[9],test[10])){
                test[12]++;
                }else{
                    test[13]++;
                }
                // cout<<test[12]<<test[13]<<endl;
                l1=min(l,r);
                r1=max(l,r);
                if(akon(test[9],test[10])){
                test[12]++;
                }else{
                    test[13]++;
                }
                // cout<<test[12]<<test[13]<<endl;
                increment(tata2,lala2,1,1,n,l1,r1,inc);
                if(akon(test[9],test[10])){
                test[12]++;
                }else{
                    test[13]++;
                }
                // cout<<test[12]<<test[13]<<endl;
                continue;
            }

            if(x.S.F==x.S.S)
            {
                if(akon(test[9],test[10])){
                test[12]++;
                }else{
                    test[13]++;
                }
                // cout<<test[12]<<test[13]<<endl;
                cout<<b[x.S.S]<<"\n";
                if(akon(test[9],test[10])){
                test[12]++;
                }else{
                    test[13]++;
                }
                // cout<<test[12]<<test[13]<<endl;
                continue;
            }

            if(x.S.F>x.S.S)
            {
                
                if(akon(test[9],test[10])){
                test[12]++;
                }else{
                    test[13]++;
                }
                // cout<<test[12]<<test[13]<<endl;
                int l=x.S.S;
                int r=x.S.F;               
                if(akon(test[9],test[10])){
                test[12]++;
                }else{
                    test[13]++;
                }
                // cout<<test[12]<<test[13]<<endl;
                if(query(segment,1,n,l,r,1)==query(segment,1,n,l,r-1,1))
                {
                    if(akon(test[9],test[10])){
                    test[12]++;
                    }else{
                        test[13]++;
                    }
                    // cout<<test[12]<<test[13]<<endl;
                    cout<<"-1\n";
                    continue;
                }

                else
                {
                    if(akon(test[9],test[10])){
                    test[12]++;
                    }else{
                        test[13]++;
                    }
                    // cout<<test[12]<<test[13]<<endl;
                    cout<<sumofrange(tata,lala,1,1,n,l,l)-sumofrange(tata,lala,1,1,n,r,r)+b[r]<<"\n";
                }
            }

            else
            {
                int l=x.S.S;
                int r=x.S.F;
                if(akon(test[12],test[13])){
                    test[14]++;
                }else{
                    test[15]++;
                }
                // cout<<test[14]<<test[15]<<endl;
                if(query(segment,1,n,r,l,1)==query(segment,1,n,r+1,l,1))
                {
                    if(akon(test[12],test[13])){
                        test[14]++;
                    }else{
                        test[15]++;
                    }
                    // cout<<test[14]<<test[15]<<endl;
                    cout<<"-1\n";
                     if(akon(test[12],test[13])){
                        test[14]++;
                    }else{
                        test[15]++;
                    }
                    // cout<<test[14]<<test[15]<<endl;
                    continue;
                }
                else
                {
                     if(akon(test[12],test[13])){
                        test[14]++;
                    }else{
                        test[15]++;
                    }
                    // cout<<test[14]<<test[15]<<endl;
                    cout<<sumofrange(tata2,lala2,1,1,n,l,l)-sumofrange(tata2,lala2,1,1,n,r,r)+b[r]<<"\n";
                     if(akon(test[12],test[13])){
                        test[14]++;
                    }else{
                        test[15]++;
                    }
                    // cout<<test[14]<<test[15]<<endl;
                }
            }
        }        
         if(akon(test[12],test[13])){
                        test[14]++;
                    }else{
                        test[15]++;
                    }
                    // cout<<test[14]<<test[15]<<endl;
    }

    return 0;
}