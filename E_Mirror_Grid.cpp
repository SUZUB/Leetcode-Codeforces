#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int count=0;
    for(int i=0;i<n/2;i++){
        for(int j=0;j<(n + 1) / 2;j++){
            int z=0,o=0;
            v[i][j]=='1' ? o++ : z++;
            v[j][n-1-i] =='1'? o++ : z++;
            v[n-1-i][n-1-j]=='1' ? o++ : z++;
            v[n-1-j][i] =='1'? o++ : z++;
            count+=min(o,z);
        }
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