#include <iostream>
#include <vector>
using namespace std;
vector<int>ans;
void solve() {
    long long n, k, x;
    cin>>n>>k>>x;
    long long min_sum = (k*(k+1))/2;
    long long max_sum= (n*(n+1)/2) - ((n-k)*(n-k+1))/2 ;
    if(x<min_sum || x>max_sum){
        ans.push_back(0);
    }else{
         ans.push_back(1);
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
    for(int i=0;i<ans.size();i++){
        if(ans[i]==0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}