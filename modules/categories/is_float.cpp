export module meta.categories.is_float;

import meta.core.bool_constant;

export namespace meta{
    
    template<typename T>
    struct is_float : false_type {};
    
    template<>
    struct is_float<float> : true_type {};
    
    template<typename T>
    inline constexpr bool is_float_v = is_float<T>::value;
    
}		