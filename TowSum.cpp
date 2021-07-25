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
                    result.push_back(i);
                    result.push_back(j);
                    key=1;
                    idx1=i;
                    idx2=j;
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
    vector<int>v={1,2,3,4,5};
    vector<int>result=s.twoSum(v,6);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

}