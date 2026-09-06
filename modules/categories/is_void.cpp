export module meta.categories.is_void;

import meta.core.bool_constant;

export namespace meta{
    
    template<typename T>
    struct is_void : false_type {};
    
    template<>
    struct is_void<void> : true_type {};
    
    template<typename T>
    inline constexpr bool is_void_v = is_void<T>::value;
}
