Goal: Given a non-negative integer n, return the decimal representation of n in an array. Each element in the array should represent a digit of n, starting from the most significant digit to the least significant digit.
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> v;
        long long count = 1;
        while (n != 0) {
            long long num = 0;
            num = n % 10 * count;
            if (num != 0) {      // Check if the digit is not zero
                v.insert(v.begin(), num);
            }
            count = count * 10;
            n = n / 10;
            
        }
        return v;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution solution;
    vector<int> result = solution.decimalRepresentation(n);
    
    for(auto it : result) {
        cout << it << " ";
    }

    return 0;
}