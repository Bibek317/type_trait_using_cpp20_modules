export module meta.categories.is_const;

import meta.core.bool_constant;

export namespace meta{
    
    template<typename T>
    struct is_const : false_type {};
    
    template<typename T>
    struct is_const<const T> : true_type {};
    
    
    template<typename T>
    inline constexpr bool is_const_v = is_const<T>::value;
    
}	