// #include<iostream>
// #include <vector>
// #include<unordered_set>
// #include<algorithm>
// using namespace std;
// int gcd(int a, int b){
//     if(b==0)return a;
//     return gcd(b,a%b);
// }
// int find_gcd(vector<int>v){
//     while(v.size()>1){
//         int x=v.back();
//         v.pop_back();
//         int y=v.back();
//         v.pop_back();
//         v.push_back(gcd(x,y));
//     }
//     return v[0];
// }
// int main(){
//     int q;
//     cin>>q;
//     vector<int>ans;
//     for(int i=0;i<q;i++){
//         int n;
//         cin>>n;
//         vector<int>v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         int gcd_t= find_gcd(v);
//         if(gcd_t>v.size())ans.push_back(0); // not good so
//         else{
//             bool flag=false;
//             for(int i=0;i<n;i++){
//                 for(int j=i+1;j<n;j++){
//                     if(gcd(v[i],v[j])<=2){
//                         flag=true;
//                         break;
//                     }
//                 }
//                 if(flag)break;
//             }
//             ans.push_back(flag);
//         }
//     }
//     for(int i=0;i<q;i++){
//         if(ans[i])cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }
// }

#include <iostream>
#include <vector>
#include <numeric>
#include<math.h>
using namespace std;

int gcd(int a, int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        if (!(cin >> n)) break;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n < 2) {
            cout << "NO" << "\n";
            continue;
        }

        bool found = false;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (gcd(a[i], a[j]) <= 2) {
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        cout << (found ? "YES" : "NO") << "\n";
    }
    return 0;
}