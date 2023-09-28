#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
            else{
                v.push_back(nums[i]);
            }
        }
        for(int i=0;i<count;i++){
            v.push_back(0);
        }
        nums=v;
    }
};

int main(){
	Solution s;
	vector<int>nums={1,3,0,12,0,7,4,0};
	s.moveZeroes(nums);
	for(int i=0;i<nums.size();i++){
		cout<<nums[i]<<" ";
	}
}