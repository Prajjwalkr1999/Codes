#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
	int k;
	cin>>k;
	deque<int> q(k);
	int a[10];
	for(int i=0;i<8;i++){
		cin>>a[i];
	}
	for(int i=0;i<k;i++){
		while(!q.empty()&&a[i]<=a[q.back()]){
			q.pop_back();
		}
		q.push_back(i);
	}
	for(int i=k;i<8;i++){
		cout<<a[q.front()];
		while(!q.empty()&&q.front()<=i-k){
			q.pop_front();
		}
		while(!q.empty()&&a[i]<=a[q.front()]){
			q.pop_back();
		}
		q.push_back(i);
	}
    // cout<<a[q.front()];
}

