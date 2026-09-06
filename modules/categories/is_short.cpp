export module meta.categories.is_short;

import meta.core.bool_constant;

export namespace meta{
    
    template<typename T>
    struct is_short : false_type {};
    
    template<>
    struct is_short<short> : true_type {};
    
    template<typename T>
    inline constexpr bool is_short_v = is_short<T>::value;
    
}	