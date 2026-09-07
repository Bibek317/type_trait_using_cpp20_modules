import meta;

#include <iostream>

int main() {

  static_assert(meta::is_same_v<int, int>);
  static_assert(!meta::is_same_v<int, float>);

  static_assert(meta::is_same_v<meta::type_identity_t<int>, int>);

  std::cout << "All compile-time tests passed!\n";
  
  int arr[5] = {1,2,3,4,5};

  if (meta::is_array_v<decltype(arr)>) {
    std::cout << "It's array\n";
  }

  bool is_same = meta::is_same_v<int, meta::remove_cvref_t<volatile const int&&>>;
  std::println("is it int after removing cvref qualifier=> {}", is_same);

  meta::remove_pointer_t<int *> x = 50;
  std::println("The value of x is {}", x);
  
}