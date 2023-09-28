#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        //reverse(s.begin(),s.end());
		int n=s.size();
		for(int i=0;i<n/2;i++){
			char c=s[i];
			s[i]=s[n-i-1];
			s[n-i-1]=c;
		}
    }
};

int main(){
	vector<char>v={'h','e','l','l','o'};
	Solution s;
	s.reverseString(v);
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}