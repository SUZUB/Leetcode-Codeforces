#include<iostream>
#include <vector>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,xk,yk,xq,yq;
        cin>>a>>b;
        cin>>xk>>yk;
        cin>>xq>>yq;
        int ans=0;
        vector<int>x={a,-1*a,a,-1*a,b,-1*b,b,-1*b};
        vector<int>y={b,-1*b,-1*b,b,a,-1*a,-1*a,a};
        set<pair<int,int>> mid;
        for(int i=0;i<8;i++){
            mid.insert({xk + x[i], yk + y[i]});
        }
        for(auto p : mid){
            for(int j=0;j<8;j++){
                if(p.first + x[j] == xq && p.second + y[j] == yq){
                    ans++;
                    break;
                }
            }
        }

        cout<<ans<<endl;
    }
}