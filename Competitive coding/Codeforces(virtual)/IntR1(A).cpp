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
            string a;
            cin>>a;
            int x=a[0]-'a'+1;
            int flag=0;
            for(int i=1;i<a.size();i++){
                if(x<26){
                    if((a[i]-'a'+1)!=x+1){
                        flag=1;
                        // cout<<"NO\n";
                        break;
                    }else{
                        x++;
                    }
                }else{
                    if((a[i]-'a'+1)!=1){
                        // cout<<"NO";
                        flag=1;
                        break;
                    }else{
                        x=1;
                    }
                }
            }
            // if(flag==0)
            //     cout<<"YES\n";
            // int flag=0;
            // int i=0;
            // for(char c=a[0];c<='z'&&i<a.size();c++){
            //     // cout<<a[i]<<" "<<c<<endl;
            //     if(a[i]!=c){
            //         flag=1;
            //         break;
            //     }else{
            //         i++;
            //     }
            //     if(c=='z'){
            //         c='a'-1;
            //     }
            // }
            if(flag){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
            }

        }
        return 0;
    }

