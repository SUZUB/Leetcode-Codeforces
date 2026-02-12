#include<iostream>
#include <vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main(){
    int q;
    cin>>q;
    vector<int>ans;
    for(int i=0;i<q;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int j=0;j<n;j++){
            cin>>v[j];
        }
        if(v[0]==1)ans.push_back(1);
        else ans.push_back(0);
    }
    for(int i=0;i<q;i++){
        if(ans[i])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}