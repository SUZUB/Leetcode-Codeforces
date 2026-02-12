#include <iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<unordered_map>
using namespace std;
void slove(){
    int n,m;
    cin>>n>>m;
    bool flag=false;
    priority_queue<int, vector<int>, greater<int>>pq;
    long long sum=0;
    int neg=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            sum+=abs(x);
            pq.push(abs(x));
            if(x==0)flag=true;
            if(x<0)neg++;
        }
    }
    if(flag || neg%2==0 ){
        cout<<sum<<endl;
        return;
    }else{
        cout<<sum-(2*abs(pq.top()))<<endl;
        return ;
    }    
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        slove();
    }
    return 0;
}