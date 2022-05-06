#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& arr, int search_elem) const {

    // Tips:
    // 1. Задайте две переменные: (1) индекс первого элемента и (2) индекс последнего элемента.
    int left = 0;
    int right = arr.size() - 1;
    // 2. Проверяйте наличие целевого элемента по индексам.
    if (search_elem > right)
    {
      return std::nullopt;
    }
    // 3. Обновляйте индексы пока левый не станет больше правого.
    while (left <= right)
    {
      if (arr[left] == search_elem)
      {
        return left;
      }
      if (arr[right] == search_elem)
      {
        return right;
      }
      left += 1;
      right -= 1;
    }



  }

}  // namespace assignment