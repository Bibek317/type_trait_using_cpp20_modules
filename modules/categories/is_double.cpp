export module meta.categories.is_double;

import meta.core.bool_constant;

export namespace meta{
    
    template<typename T>
    struct is_double : false_type {};
    
    template<>
    struct is_double<double> : true_type {};
    
    template<typename T>
    inline constexpr bool is_double_v = is_double<T>::value;
    
}