#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;

        for (int num : nums) {
            if (num == first || num == second || num == third)
                continue;

            if (num > first) {
                third = second;
                second = first;
                first = num;
            } 
            else if (num > second) {
                third = second;
                second = num;
            } 
            else if (num > third) {
                third = num;
            }
        }

        return (third == LONG_MIN) ? first : third;
    }
};

int main() {
    Solution obj;

    vector<int> nums1 = {3, 2, 1};
    cout << "Output: " << obj.thirdMax(nums1) << endl; 

    vector<int> nums2 = {1, 2};
    cout << "Output: " << obj.thirdMax(nums2) << endl; 

    vector<int> nums3 = {2, 2, 3, 1};
    cout << "Output: " << obj.thirdMax(nums3) << endl; 

    return 0;
}