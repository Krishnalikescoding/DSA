// Goal: reverse the given integer and return the reversed integer. If the reversed integer overflows, return 0.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long num = 0;
            while (x != 0) {
                 num = num * 10 + x % 10;
                 x = x / 10;
            }           
            if (num <= INT_MAX && num >= INT_MIN) {  //condition for overflow and underflow of integer.
                return num;
            } else {
                return 0;
            }
    }
};

int main()
{
    int x;
    cin >> x;
    Solution solution;
    int reversed = solution.reverse(x);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}