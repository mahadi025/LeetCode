#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i=0;
		vector<int>sums;
		int sum=0;
		while(i<nums.size()){
			sum+=nums[i];
			sums.push_back(sum);
			i++;
		}
		return sums;
    }
};


int main(){
	Solution s;
	vector<int>nums={1,2,3,4};
	vector<int>sum=s.runningSum(nums);
	for(int i=0;i<sum.size();i++){
		cout<<sum[i]<<endl;
	}
}