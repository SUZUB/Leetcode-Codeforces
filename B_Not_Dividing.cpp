#include <iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
void slove(){
    int n;
    cin>>n;
    int a;
    cin>>a;
    if (a == 1) {
        a++;
    }
    vector<int>v;
    v.push_back(a);
    int count=0;
    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        if (x == 1) {
            x++;
        }
        if (x % v.back() == 0) {
            x++;
        }
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;    
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        slove();
    }
    return 0;
}