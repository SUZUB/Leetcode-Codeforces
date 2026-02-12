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
        vector<int>ans;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int j=1;j<n-1;j++)if(v[j]>v[j-1] && v[j]>v[j+1])ans.push_back(j+1);
        if(ans.size()){
            cout<<"YES"<<endl;
            for(int z=0;z<ans.size();z++){
                cout<<ans[z]-1<<" "<<ans[z]<<" "<<ans[z]+1<<endl;
                break;
            } 
        }else{
            cout<<"NO"<<endl;
        }
    }
}