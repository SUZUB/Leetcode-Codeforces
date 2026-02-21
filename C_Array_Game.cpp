#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>
using namespace std;
void solve() {
    int n,k;
    cin>>n>>k;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(k>=3){
        cout<<0<<endl;
        return ;
    }
    long long mn=v[0];
    for(int i=1;i<n;i++){
        mn=min(mn,abs(v[i]-v[i-1]));
    }
    if(k==1){
        cout<<mn<<endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long d = v[j] - v[i];
            auto it = lower_bound(v.begin(), v.end(), d);
            if (it != v.end()) mn = min(mn, *it - d);
            if (it != v.begin()) mn = min(mn, d - *prev(it));
        }
    }
    cout<<mn<<endl;
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