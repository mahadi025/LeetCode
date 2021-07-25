#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long int bup=x,reverseDigit=0,rem;
        while(bup!=0){
            reverseDigit=reverseDigit*10+bup%10;
            bup/=10;
        }
        if(reverseDigit==x){
            return true;
        }
        return false;
    }
};

int main(){
    Solution s;
    bool result=s.isPalindrome(1221);
    if(result){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
}
