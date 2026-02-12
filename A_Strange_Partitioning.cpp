#include<iostream>
#include <vector>
#include<unordered_map>
#include<algorithm>
#include<climits>
#include<math.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    vector<int>ans;
    for(int i=0;i<q;i++){
        int n,x;
        cin>>n>>x;
        long long sum=0;
        long long mx=0,mn=0;   
        for(int i=0;i<n;i++){
            int y;
            cin>>y;
            sum+= (y);
            mx += (y + x - 1) / x;
        }
        cout<<(sum + x - 1) / x<<" "<<mx<<endl;
    }
}