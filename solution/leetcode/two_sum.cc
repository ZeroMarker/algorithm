#include <iostream>
#include <ranges>
#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> umap;
        for (auto [index, value] : std::views::enumerate(nums)) {
            // 查找
            if (umap.find(value) != umap.end()) {
                return { umap[value] , static_cast<int>(index) };
            }
            // 插入补值和索引
            umap.insert(std::make_pair(target-value, index));
        }
        // 查找为空
        return {};
    }
};

