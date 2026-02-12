#include<iostream>
#include <vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
vector<int> slove(int n,int k,int x){
        vector<int>vec;
        if(x==1){
            if(n%2){ 
            if (k == 1 || n == 1) return {};
                    else{
                        if (n % 2) {
                            if (k < 3) return {};
                            vec.push_back(3);
                            n -= 3;
                        }
                        while (n > 0) {
                            vec.push_back(2);
                            n -= 2;
                        }
                    }
                }else{
                    if(k<=1 || n<2) return {};
                    else{
                        while(n){
                            vec.push_back(2);
                            n-=2;
                        }
                    }
                }
            }else{
                for(int i=0;i<n;i++)vec.push_back(1);
        }       
        return vec;
}
int main(){
    int q;
    cin>>q;
    vector<vector<int>>ans;
    for(int i=0;i<q;i++){
        int n,k,x;
        cin>>n>>k>>x;
        ans.push_back(slove(n,k,x));
    }
    for(int i=0;i<q;i++){
        if(ans[i].size()==0)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<ans[i].size()<<endl;
            for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
            cout<<endl;
        }
    }
}