#include<vector>
#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<climits>
using namespace std;
void slove(){
    int n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<vector<long long>>vec;
    a--,b--;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        vec.push_back({x,y});
    }
    long long min_a=2e14,min_b=2e14;
    for(int i=0;i<k;i++){
        min_a=min(min_a,abs(vec[i][1]-vec[a][1])+abs(vec[i][0]-vec[a][0]));
        min_b=min(min_b,abs(vec[i][1]-vec[b][1])+abs(vec[i][0]-vec[b][0]));
    }
    if(a < k) min_a = 0;
    if(b < k) min_b = 0;

    cout << min(abs(vec[b][1]-vec[a][1])+abs(vec[b][0]-vec[a][0]), min_a + min_b) << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) slove();
    return 0;
}