//Goal: To find wheter the given number is palindrome or not.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int num  = 0;
        int original = x;
        while(x > 0){
            num  = num*10 + x%10;
            x = x/10;
        }
        if (num != original){ // always check the original number.
            return false;
        }
        else{
            return true;
        }
    }
};

int main()
{
    int x = 5;
    Solution solution;
    bool result = solution.isPalindrome(x);
    cout << "Is " << x << " a palindrome? " << (result ? "Yes" : "No") << endl;

    return 0;
}