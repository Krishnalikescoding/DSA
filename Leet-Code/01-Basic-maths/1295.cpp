//Goal is to find the even digit numbers in the given array/vector of integers.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        
        int cnt = 0;
        int digits = 0;

        for (auto it : nums)
        {
            int counter = 0;   //important to reset the counter for each number in the vector.
            while (it > 0)
            {
                digits = it % 10;
                counter++;
                it = it / 10;
            }
            if (counter % 2 == 0)
            {
                cnt++;
            }
        }
        return cnt;
    }
};

int main()
{
    vector<int> nums = {437, 315, 322, 431, 686, 264, 442};
    Solution solution;
    int count = solution.findNumbers(nums);

    cout << "Count of numbers with even digit count: " << count << endl;

    return 0;
}