#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    if(n%2){
        int x = (n+1)/2  + 1;
        int y = (n-1)/2  + 1;
        cout<<2*x*y<<endl;
    }else{
        int x = (n)/2    + 1;
        cout<<x*x<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve(); 
    return 0;
}