/*
#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int
int main(){
    int n;cin>>n;
    vector<int>height(n);
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    // O(n^2)
    // int max_water=0;
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         int mn_height= min(height[i],height[j]);
    //         int diff = abs(i-j);
    //         int area = mn_height * diff;
    //         max_water = max(max_water,area);
    //     }
    // }

    // O(n)
    int max_water=0;
    int left=0,right=n-1;
    while(left<right){
        int mn_height= min(height[left],height[right]);
        int diff = abs(left-right);
        int area = mn_height * diff;
        max_water = max(max_water,area);
        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
    }
    cout<<max_water<<"\n";
    return 0;
}
*/

// Solution for submission in leetcode
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max_water=0;
        int left=0,right=n-1;
        while(left<right){
            int mn_height= min(height[left],height[right]);
            int diff = abs(left-right);
            int area = mn_height * diff;
            max_water = max(max_water,area);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return max_water;
    }
};