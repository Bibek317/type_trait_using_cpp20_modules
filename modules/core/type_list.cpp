export module meta.core.type_list;

export namespace meta{
    
    template<typename... Ts>
    struct type_list {
        
        static constexpr auto size = sizeof...(Ts);
        
        template<auto N>
        using at = Ts...[N];
        
        using front = at<0>;
        using back = at<size - 1>;
        
        
        template<template<typename...> typename F>
        using transform = type_list<F<Ts>...>;
        
        template<template<typename...> typename F>
        using apply = F<Ts...>;
        
        
    };
}