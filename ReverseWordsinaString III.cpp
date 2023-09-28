#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
		int i=0;
		int j;
		string bup,rev="";
		while(i<s.length()){
			j=i;
			bup="";
			while(s[j]!=' ' && j<s.length()){
				bup+=s[j];
				j++;
			}
			reverse(bup.begin(), bup.end());
			rev+=bup+' ';
			i=j;
			i++;
		}
		return rev.substr(0, s.length());
    }
};

int main(){
	Solution s;
	string str="Let's take LeetCode contest";
	string result=s.reverseWords(str);
	cout<<result<<endl;
}