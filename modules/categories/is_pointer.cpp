export module meta.categories.is_pointer;

import meta.core.bool_constant;

export namespace meta {
    
    template<typename T>
    struct is_pointer : false_type {};
    
    template<typename T>
    struct is_pointer<T*> : true_type{};
    
    template<typename T>
    inline constexpr bool is_pointer_v = is_pointer<T>::value;
}