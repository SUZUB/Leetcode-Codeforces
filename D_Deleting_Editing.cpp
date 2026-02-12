#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<unordered_set>
using namespace std;

void solve() {
    string s,str;
    cin>>s;
    cin>>str;
    int i=s.size()-1,j=str.size()-1;
    unordered_set<char>set;
    while(i>=0 && j>=0){
        if(str[j]==s[i]){
            if(set.count(s[i])==0){
                i--,j--;
            }else{
                break;
            }
        }else{
            set.insert(s[i]);
            i--;
        }
    }
    if(j==-1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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