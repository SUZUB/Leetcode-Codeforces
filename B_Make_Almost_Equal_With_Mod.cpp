#include <iostream>
#include <vector>
#include <algorithm>
#include<set>

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=1;i<=62;i++){
        long long x = 1LL  <<i;
        set<long long>st;
        for(auto ele : v) st.insert(ele % x);
        if(st.size()==2){
            cout<<x<<endl;
            return;
        }
    }
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