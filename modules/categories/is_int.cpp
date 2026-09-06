export module meta.categories.is_int;

import meta.core.bool_constant;

export namespace meta{
    
    template<typename T>
    struct is_int : false_type{};
    
    template<>
    struct is_int<int> : true_type{};
    
    template<typename T>
    inline constexpr bool is_int_v = is_int<T>::value;
}