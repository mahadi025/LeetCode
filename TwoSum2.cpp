#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
		int l=0;
		int r=nums.size()-1;
		int sum=0;
		while(l<r){
			sum=nums[l]+nums[r];
			if(sum==target){
				result.push_back(l+1);
				result.push_back(r+1);
				break;
			}
			else if(sum>target){
				r--;
			}
			else{
				l++;
			}
		}
		
        return result;
    }
};

int main(){
    Solution s;
    vector<int>v={1,2,4,5,7,8};
    vector<int>result=s.twoSum(v,10);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

}