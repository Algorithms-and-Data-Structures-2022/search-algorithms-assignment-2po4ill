#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& arr, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair
    int left = 0;
    int right = arr.size() - 1;
    while (arr[left] + arr[right] != sum and left != right)
    {
      if (arr[left] + arr[right] < sum)
      {
        left += 1;
      }
      else
      {
        right -= 1;
      }
    }
    if (left != right)
    {
      return std::make_pair(left, right);
    }
  }
} // namespace assignment