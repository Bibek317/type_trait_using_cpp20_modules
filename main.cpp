import meta;

#include <iostream>
#include <print>
#include <concepts>

int main() {

  using types = meta::type_list<int, const double &, char>;

  // Basic operations
  
  static_assert(types::size == 3);

  static_assert(meta::is_same_v<types::at<0>, int>);

  static_assert(meta::is_same_v<types::front, int>);

  
  using pointers = types::transform<meta::add_pointer_t>;

  static_assert(meta::is_same_v<pointers::at<0>, int *>);

  static_assert(meta::is_same_v<pointers::at<1>, const double *>);

  static_assert(meta::is_same_v<pointers::at<2>, char *>);

  using wrapped = types::apply<std::tuple>;

  static_assert(
      meta::is_same_v<wrapped, std::tuple<int, const double &, char>>);

  std::println("type_list tests passed!");
 
}