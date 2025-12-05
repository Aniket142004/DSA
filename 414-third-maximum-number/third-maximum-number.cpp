#include <vector>
#include <climits>
#include <algorithm>
#include <set>

class Solution {
public:
    int thirdMax(std::vector<int>& nums) {
        // Use three variables to track the three largest distinct numbers
        // Initialized to long long to safely handle comparisons with INT_MIN
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;
        
        // Iterate through each number in the array
        for (int num : nums) {
            // Case 1: The current number is the largest
            if (num > first) {
                third = second;
                second = first;
                first = num;
            } 
            // Case 2: The current number is smaller than the largest, but larger than the second largest
            // And importantly, NOT equal to the first (handles distinct values)
            else if (num < first && num > second) {
                third = second;
                second = num;
            } 
            // Case 3: The current number is smaller than the second largest, but larger than the third largest
            // And importantly, NOT equal to the second (handles distinct values)
            else if (num < second && num > third) {
                third = num;
            }
        }
        
        // After the loop, check if a third distinct maximum was found (it would be > LLONG_MIN)
        // If 'third' is still LLONG_MIN, it means there are fewer than three distinct numbers.
        // In this case, the problem requires returning the maximum (which is 'first').
        if (third == LLONG_MIN) {
            return (int)first;
        } else {
            return (int)third;
        }
    }
};