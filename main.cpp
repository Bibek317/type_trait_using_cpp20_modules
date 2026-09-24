import meta;

#include <iostream>
#include <print>
#include <concepts>
#include <ranges>

int main() {

  using types = meta::type_list<int, const double &, char>;

  // Basic operations
  
  static_assert(types::size == 3);

  static_assert(meta::is_same_v<types::at<0>, int>);

  static_assert(meta::is_same_v<types::front, int>);

  
  using pointers = types::transform<meta::add_pointer_t>;

  static_assert(meta::is_same_v<pointers::front, int *>,"it's not pointer at front ");

  static_assert(meta::is_same_v<pointers::at<1>, const double *>);

  static_assert(meta::is_same_v<pointers::at<2>, char *>);

  using wrapped = types::apply<std::tuple>;

  static_assert(
      meta::is_same_v<wrapped, std::tuple<int, const double &, char>>);

  std::println("type_list tests passed!");
  
  using squared_value = meta::value_list<10,20,30,40,50>::transform<
  	[](auto x){return x * x;}
  >;
  squared_value::foreach(
      [](auto x){
          std::println("The value is {}",x);
      }
  );
  
  auto arr = squared_value::to_array() | std::views::transform([](auto x){return x + 10;});
  std::println("{}", arr);
  
 return 0;
}