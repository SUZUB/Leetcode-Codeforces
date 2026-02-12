#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    vector<string>ans;
    for(int i=0;i<q;i++){
        string str;
        cin>>str;
        unordered_set<int>ab;
        unordered_set<int>ba;
        for(int i=0;i<str.size()-1;i++){
            if(str[i]=='a' && str[i+1]=='b')ab.insert(i);
            if(str[i]=='b' && str[i+1]=='a')ba.insert(i);
        }
        int n=ab.size(),m=ba.size();
        if(n>m){
            for(int i=str.size()-1;i>=0;i--){
                if(str[i]=='b'){
                    str[i]='a';
                    break;
                }
            }
        }
        else if(m>n){
            for(int i=0;i<str.size();i++){
                if(str[i]=='b'){
                    str[i]='a';
                    break;
                }
            }
        }
        ans.push_back(str);
    }
    for(int i=0;i<q;i++){
        cout<<ans[i]<<endl;
    }
}
