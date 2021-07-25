#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result=nums1;
        for(int i=0;i<nums2.size();i++){
            result.push_back(nums2[i]);
        }
        sort(result.begin(), result.end());
        double median;
        int n=result.size();
        if(n%2!=0){
            return median=double(result[n/2]);
        }
        median=double(result[n/2-1]+result[n/2])/2;
        return median;

    }
};

int main(){
    Solution s;
    vector<int>num1={1,2,3};
    vector<int>num2={4,5,6};
    cout<<s.findMedianSortedArrays(num1,num2);
}