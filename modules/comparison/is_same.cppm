export module meta.comparison.is_same;

import meta.core.bool_constant;

export namespace meta{
    
    template<typename T, typename U>
    struct is_same : false_type {};
    
    template<typename T>
    struct is_same<T, T> : true_type {};
    
    template<typename T, typename U>
    inline constexpr bool is_same_v =  is_same<T, U>::value;
    
}    