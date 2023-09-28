#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();// When k>nums.size()
		reverse(nums.begin(),nums.end()-k);
		reverse(nums.begin()+nums.size()-k,nums.end());
		reverse(nums.begin(),nums.end());
    }
};

int main(){
	Solution s;
	vector<int>nums={1,2,3,4,5,6,7,8,9};
	s.rotate(nums,4);
	for(int i=0;i<nums.size();i++){
		cout<<nums[i]<<" ";
	} 
}