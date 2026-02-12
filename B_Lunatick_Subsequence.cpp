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
        int n;
        cin>>n;
        vector<int>freq(2,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==0)freq[0]++;
            if(x==1)freq[1]++;
        }
        cout<<freq[1] * (1LL << freq[0])<<endl;
    }
}