UndirectedGraphNode* head=node;

queue<UndirectedGraphNode*> q;

map<int,UndirectedGraphNode*> mp;

q.push(node);

while(!q.empty()){
    UndirectedGraphNode* temp=q.front();
    q.pop();
    mp[temp.label]=temp;
    for(auto x:temp.neighbours){
        if()
    }
}

