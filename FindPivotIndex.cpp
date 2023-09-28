#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int pivotIndex(vector<int>&nums){
		int rightSum=0,leftSum=0;
		rightSum=accumulate(nums.begin(),nums.end(),0);
		for(int i=0;i<nums.size();i++){
			rightSum-=nums[i];
			if(leftSum==rightSum)
				return i;
			leftSum+=nums[i];
			}
		return -1;
	}
};

int main(){
	Solution s;
	vector<int>nums={1,7,3,6,5,6};
	int rightSum=accumulate(nums.begin(),nums.end(),0);
	cout<<rightSum<<endl;
	cout<<s.pivotIndex(nums);
}