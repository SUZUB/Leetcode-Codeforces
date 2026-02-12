// #include<iostream>
// #include <vector>
// #include<unordered_map>
// #include<algorithm>
// using namespace std;
// int main(){
//     int q;
//     cin>>q;
//     vector<int>ans;
//     for(int i=0;i<q;i++){
//         int n;
//         cin>>n;
//         unordered_map<int,int>v;
//         int val;
//         for(int j=0;j<n;j++){
//             cin>>val;
//             v[val]++;
//         }
//         if(v.size()==1 || v.size()==0)ans.push_back(1);
//         else{
//             if(v.size()==2){
//                 int k=0;
//                 int arr[2];
//                 for(auto ele:v){
//                     arr[k++]=ele.second;
//                 }
//                 if((abs(arr[0]-arr[1])<=1 && n%2==1 ) || (arr[0]==arr[1]))ans.push_back(1);
//                 else ans.push_back(0);
//             }
//             else ans.push_back(0);
//         }
//         v.clear();
//     }
//     for(int i=0;i<ans.size();i++){
//         if(ans[i])cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int q; // Number of qesq cases
    cin >> q;
    while (q--)
    {
        long long n; // Length of the array for the current test case
        cin >> n;
        long long a[n]; // Array to store the elements
        for (int i = 0; i < n; i++) // Input the elements of the array
            cin >> a[i];
        
        // Map to store the frequency of each element in the array
        map<long long, long long> frequency_map;
        for (int i = 0; i < n; i++) // Calculate the frequency of each element
            frequency_map[a[i]]++;
        
        // Check the number of distinct elements in the array
        if (frequency_map.size() >= 3) // If there are 3 or more distinct elements
        {
            cout << "No" << endl; // It's not possible to make the array good
        }
        else
        {
            // Get the frequency of the smallest and largest elements
            long long freq_1 = frequency_map.begin()->second;
            long long freq_2 = frequency_map.rbegin()->second;
            
            // Check if the array can be made good
            if (freq_1 == freq_2) // If both frequencies are equal
                cout << "Yes" << endl; // The array can be made good
            else if (n % 2 == 1 && abs(freq_1 - freq_2) == 1) // If the array length is odd and the frequency difference is 1
                cout << "Yes" << endl; // The array can be made good
            else
                cout << "No" << endl; // Otherwise, it's not possible
        }
    }
    return 0;
}

// Time Complexity (TC): O(nlog2n) = O(100*log2(100)) = O(100*7) = O(700)
// Space Complexity (SC): O(n+n) = O(2n) = O(n) = O(100)