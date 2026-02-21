#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include<climits>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    long long ne=0;
    int z=0;
    long long sum=0;
    long long mn = LLONG_MAX;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i] < 0)ne++;
        if(v[i] == 0)z=1;
        long long current_abs = abs((long long)v[i]);
        mn=min(mn,current_abs);
        sum+=current_abs;
    }
    if(z==1 || ne%2==0){
        cout<<sum<<endl;
    }else{
        cout<<sum-(2*mn)<<endl;
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