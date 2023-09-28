#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int idx1,idx2,key=0;
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    result.push_back(i+1);
                    result.push_back(j+1);
                    key=1;
                    break;
                }
                if(key==1){
                    break;
                }
            }
        }
        return result;
    }
};

int main(){
    Solution s;
    vector<int>v={2,7,11,15};
    vector<int>result=s.twoSum(v,9);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

}