#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long int reverse(long long int x){
        long long int rev=0;
        if(x>0){
            long long int digit=x;
            while(digit!=0){
                rev=rev*10+digit%10;
                digit/=10;
            }
        }
        else{
           long long int digit=x*-1;
            while(digit!=0){
                rev=rev*10+digit%10;
                digit/=10;
            }
            rev*=-1; 
        }
        if(rev>=pow(2,31)-1||rev<=-pow(2,31)){
            return 0;
        }
        return rev;
    }
};

int main(){
    Solution s;
    cout<<s.reverse(123456789)<<endl;
}