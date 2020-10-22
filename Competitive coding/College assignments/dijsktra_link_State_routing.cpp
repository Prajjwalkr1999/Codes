#include<bits/stdc++.h>
using namespace std;
int len;

int mindis(int distance[], bool ggset[]) 
{ 
    int min = INT_MAX, min_index; 
  
    for (int v = 0; v < len; v++) 
        if (ggset[v] == false && distance[v] <= min) 
            min = distance[v], min_index = v; 
  
    return min_index; 
} 

void print(int parent[], int j) 
{ 
    if (parent[j] == - 1) 
        return; 
  
    print(parent, parent[j]); 
  
    cout<<" "<<j;
} 
   


int main() 
{ 
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    cin>>len;
    vector<vector<int>> graph(len,vector<int>(len,0));
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            cin>>graph[i][j];
        }
    }
    int src=0;
    int distance[len];   
    bool ggset[len]; 
    int parent[len]; 
    for (int i = 0; i < len; i++) 
    { 
        parent[0] = -1; 
        distance[i] = INT_MAX; 
        ggset[i] = false; 
    } 

    distance[src] = 0; 

    for (int count = 0; count < len - 1; count++) 
    {  
        int u = mindis(distance, ggset); 
        ggset[u] = true;  
        for (int v = 0; v < len; v++) 
            if (!ggset[v] && graph[u][v] && 
                distance[u] + graph[u][v] < distance[v]) 
            { 
                parent[v] = u; 
                distance[v] = distance[u] + graph[u][v]; 
            }  
    } 
    int st = 0; 
    cout<<"Vertex\t Distance\t\tPath\n"; 
    for (int i = 1; i < len; i++) 
    { 
        cout<<st<<" -> "<<i<<"\t\t"<< distance[i]<<"\t\t\t"<< st; 
        print(parent, i); 
        cout<<"\n";
    }
    return 0; 
} 