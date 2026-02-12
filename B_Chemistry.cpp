#include <iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        unordered_map<char,int>mp;
        string  str;
        cin>>str;
        for(auto c:str){
            mp[c]++;
        }
        int count=0;
        vector<int>del;
        for(auto ele:mp){
            if(ele.second%2==0)continue;
            else{
                count++;
                del.push_back(ele.second);
            }
        }
        if(count>k+1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

// 14
// 1 0
// a
// YES2 0
// ab
// NO2 1
// ba
// YES3 1
// abb
// YES3 2
// abc
// YES6 2
// bacacd
// YES6 2
// fagbza
// NO6 2
// zwaafa
// NO7 2
// taagaak
// YES14 3
// ttrraakkttoorr
// YES5 3
// debdb
// YES5 4
// ecadc
// YES5 3
// debca
// NO5 3
// abaac
// YES