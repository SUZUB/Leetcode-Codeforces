#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve() {
    int n,x;
    cin>>n>>x;
    
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long count=0;
    long long lo=v[0] - x,hi=v[0] + x;
    for(int i=1;i<n;i++){
        long long cur_lo = v[i] - x;
        long long cur_hi = v[i] + x;
            lo=max(cur_lo,lo);
            hi=min(cur_hi,hi);
        if(lo>hi){
            count++;
            lo=cur_lo;
            hi=cur_hi;
        }
    }
    cout<<count<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}