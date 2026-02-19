#include <iostream>
#include <vector>
#include <string>
#include <set>
#include<queue>
#include<unordered_map>
#include <algorithm>
using namespace std;
int slove1(vector<pair<int,int>>&p,vector<pair<int,int>>&q,vector<pair<int,int>>&r){
    int ans=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(p[i].second!=q[j].second && p[i].second!=r[k].second && r[k].second!=q[j].second ){
                    ans=max(ans,p[i].first+q[j].first+r[k].first); 
                }
            }
        }
    }
    return ans;
}
void solve() {
    int n;
    cin>>n;
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>a,b,c;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push({x,i});
        if(a.size()>3)a.pop();
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        b.push({x,i});
        if(b.size()>3)b.pop();
    }for(int i=0;i<n;i++){
        int x;
        cin>>x;
        c.push({x,i});
        if(c.size()>3)c.pop();
    }
    vector<pair<int,int>>p,q,r;
    while(a.size()){
        p.push_back(a.top());
        a.pop();
    }
    while(b.size()){
        q.push_back(b.top());
        b.pop();
    }
    while(c.size()){
        r.push_back(c.top());
        c.pop();
    }
    cout<<slove1(p,q,r)<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}