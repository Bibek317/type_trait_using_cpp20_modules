export module meta.categories.is_array;

import meta.core.bool_constant;

export namespace meta{
    
    template<typename T>
    struct is_array : false_type {};
    
    template<typename T>
    struct is_array<T[]> : true_type {};
    
    template<typename T, auto N>
    struct is_array<T[N]> : true_type {};
    
    template<typename T>
    inline constexpr bool is_array_v = is_array<T>::value;
    
}