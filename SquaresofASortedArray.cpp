#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> sortedSquares(vector<int> &nums){
        for(int i=0;i<nums.size();i++){
			nums[i]*=nums[i];
		}
		sort(nums.begin(),nums.end());
		return nums;
    }
};

int main(){
    vector<int> nums = {-4, -1, 0, 3, 10};
    Solution s;
    vector<int> result = s.sortedSquares(nums);
	for(int i=0;i<result.size();i++){
		cout<<result[i]<<endl;
	}
}