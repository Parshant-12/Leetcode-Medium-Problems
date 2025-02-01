// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         set<vector<int>>res;
//         int n= nums.size();
//         for(int i=0;i<n;i++){
//             int left=i+1,right=n-1;
//             while(left<right){
//                 int sum= nums[i]+nums[left]+nums[right];
//                 if(sum==0){
//                     res.insert({nums[i],nums[left],nums[right]});
//                     right--;
//                     left++;
//                 }
//                 else if(sum>0){
//                     right--;
//                 }
//                 else{
//                     left++;
//                 }
//             }
//         }
//         vector<vector<int>> ans(res.begin(), res.end());
//         return ans;
//     }
// };

#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int
int main(){
    int n;cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    set<vector<int>>res;
    for(int i=0;i<n;i++){
        int left=i+1,right=n-1;
        while(left<right){
            int sum= nums[i]+nums[left]+nums[right];
            if(sum==0){
                res.insert({nums[i],nums[left],nums[right]});
                right--;
                left++;
            }
            else if(sum>0){
                right--;
            }
            else{
                left++;
            }
        }
    }
    vector<vector<int>> ans(res.begin(), res.end());
    for (auto &row : ans) { 
        for (auto &val : row) {  
            cout << val << " ";
        }
        cout << "\n";
    }
    return 0;
}