#include <vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::vector<int> nums_sol = {};
        int k = 0;

        if (nums.empty()) return 0;

        if (nums.size() > 1) {
            for (int i = 0; i <= nums.size() - 2; i++) {
                if (nums[i] != nums[i + 1]) {
                    k += 1;
                    nums_sol.push_back(nums[i]);
                }
            }
            if (nums[nums.size() - 1] != nums[nums.size() - 2] || nums_sol.empty() || nums[nums.size() - 1] != nums_sol.back()) {
                nums_sol.push_back(nums[nums.size() - 1]);
                k += 1;
            }

            nums.resize(k);
            nums = nums_sol;
        }
        else { return 1; }
        return k;
    }
};