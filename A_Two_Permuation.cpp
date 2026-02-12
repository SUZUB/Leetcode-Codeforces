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
        int n,a,b;
        cin>>n>>a>>b;
        if((a==n) && (b==n))ans.push_back(1);
        else if((a+b==n-1) || (a+b >= n))ans.push_back(0);
        else{
            ans.push_back(1);
        }
    }
    for(int i=0;i<q;i++){
        if(ans[i])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}