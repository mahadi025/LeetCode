#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=val){
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }
};

int main(){
    Solution s;
    vector<int>num={1,2,3,4,5,6};
    cout<<s.removeElement(num,3);
}