#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
      stack<char>stk;
      int l=s.length();
      char top;
      for(int i=0;i<l;i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
          stk.push(s[i]);
        }
        else{
          if(stk.empty()){
            return false;
          }
          else{
            top=stk.top();
            if((s[i]==')'&&top=='(')||(s[i]=='}'&&top=='{')||s[i]==']'&&top=='['){
              stk.pop();
            }
            else{
              return false;
            }
          }
        }
      }
      if(stk.empty()){
        return true;
      }
      else{
        return false;
      }
    }
};

int main(){
    Solution s;
    string str="({)}";
    cout<<s.isValid(str);
}