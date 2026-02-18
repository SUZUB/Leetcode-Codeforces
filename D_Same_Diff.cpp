#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include<unordered_map>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    unordered_map<int,int>mp;
    long long count=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        int diff = v[i]-i;
        count+= mp[diff];
        mp[diff]++;
    }
    cout<<count<<endl;
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