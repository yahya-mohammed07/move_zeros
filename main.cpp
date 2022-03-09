#include <algorithm>
#include <iostream>
#include <vector>

auto move_zeros(std::vector<int> &nums) -> void {
  if (nums.empty()) {
    return;
  }
  auto zeros{std::count(nums.begin(), nums.end(), 0)};
  nums.erase(std::remove(nums.begin(), nums.end(), 0), nums.end());
  while (zeros > 0) {
    nums.push_back(0);
    --zeros;
  }
}

auto main() -> int {
  std::vector<int> nums{0, 1, 0, 3, 12};
  move_zeros(nums);
  for (auto &&i : nums) {
    std::cout << i << ' ';
  }
}