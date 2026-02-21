#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<stack>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int k=0;k<n;k++){
        cin>>v[k];
    }
    long long sum_a=0,sum_b=0;
    int size=0;
    int i=0,j=n-1;
    while(i<=j){
        if(sum_a<=sum_b){
            sum_a+= 1LL * v[i]; 
            i++;
        }else{
            sum_b+= 1LL * v[j]; 
            j--;
        }
        if(sum_a==sum_b){
            size = max(size,i + (n - 1 - j));
        }
    }
    cout<<size<<endl;
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