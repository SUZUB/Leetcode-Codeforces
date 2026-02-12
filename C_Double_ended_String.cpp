#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<stack>
using namespace std;

int find(string &a,string &b){
    int n = a.size();
    int m = b.size();
    vector<vector<int>> dp(n + 1,vector<int>(m + 1, 0));
    int maxLength = 0;
    int endIndex = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxLength) {
                    maxLength = dp[i][j];
                    endIndex = i;
                }
            }
        }
    }
    return maxLength;
    
}
void solve(string &a,string &b) {
    int x=find(a,b);
    cout<<a.size()+b.size()-(2*x)<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a,b;
        cin>>a;
        cin>>b;
        solve(a,b);
    }
    return 0;
}