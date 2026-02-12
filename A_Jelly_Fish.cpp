#include<iostream>
#include <vector>
#include<unordered_map>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        long long b,a,n;
        cin>>a>>b>>n;
        long long count=b;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            count+= min(a-1,v[i]);
        }
        cout<<count<<endl;
    }
}