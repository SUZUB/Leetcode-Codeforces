#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;

void solve() {
    long long a,b;
    cin>>a>>b;
    if(b>a){
        cout<<1<<endl;
    }else{
        long long min_op=INT_MAX;
        for(int i=0;i<40;i++){
            long long temp_b=b+i;
            if(temp_b==1)continue;
            long long temp_a=a;
            long long count=i;
            while(temp_a>0){
                temp_a/=temp_b;
                count++;
            }
            min_op=min(min_op,count);
        }
        cout<<min_op<<endl;
    }

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}