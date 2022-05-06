#include "assignment/binary_search_iterative.hpp"

namespace assignment {

  std::optional<int> BinarySearchIterative::Search(const std::vector<int>& arr, int search_elem) const {
    // Tips:
    // 1. Заведите две переменные: (а) индекс левой границы и (б) индекс правой границы.
    int left = 0;
    int right = arr.size() - 1;
    // 2. Поиск ведется пока индекс левой границы не превысил индекс правой.
    while (left <= right)
    // 3. Каждую итерацию вычисляйте индекс середины внутри области, задаваемой индексами левой и правой границы.
    {
      int middle = (left + right) / 2;
      // 4. Рассмотрите 3 случая:
      //    1) Целевой элемент равен элементу посередине.
      if (arr[middle] == search_elem)
      {
        return middle;
      }
      //    2) Целевой элемент меньше элемента посередине (область поиска сокращается).
      if (arr[middle] > search_elem)
      {
        right = middle - 1;
      }
      //    3) Целевой элемент больше элемента посередине (область поиска сокращается).
      else if (arr[middle] < search_elem)
      {
        left = middle + 1;
      }
    }
  }

}  // namespace assignment