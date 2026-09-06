export module meta.categories.is_char;

import meta.core.bool_constant;

export namespace meta{
    
    template<typename T>
    struct is_char : false_type {};
    
    template<>
    struct is_char<char> : true_type {};
    
    template<typename T>
    inline constexpr bool is_char_v = is_char<T>::value;
    
}