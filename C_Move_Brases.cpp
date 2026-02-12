#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<stack>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<char>st;
    int x=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            st.push('(');
        }else{
            if(st.empty())continue;
            else st.pop();
        }
    }
    cout<<st.size()<<endl;
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