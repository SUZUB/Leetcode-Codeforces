#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    
        int n,d;
        cin>>n>>d;
        vector<int>t(n);
        for(int i=0;i<n;i++)cin>>t[i];
        sort(t.begin(),t.end());
        int i=0,j=n-1;
        int count=0;
        while(j >= i){
            int x = (d / t[j]) + 1;
            if (j - i + 1 >= x){
                count++;
                i += (x - 1);
                j--;
            }
            else {
                break;
            }
        }
        cout << count << endl;
    return 0;
}