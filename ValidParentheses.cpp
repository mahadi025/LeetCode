#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
      stack<char>v;
      int l=s.length();
      for(int i=0;i<l;i++) {
          if(s[i]=='('||s[i]=='{'||s[i]=='['){
            v.push(s[i]);
          }
          else if(s[i]==')'||s[i]=='}'||s[i]==']'){
            v.pop();
          }
      }
      if(!v.empty()){
          return true;
      }
      else{
          return false;
      }  
    }
};

int main(){
    Solution s;
    string str="()";
    cout<<s.isValid(str);
}