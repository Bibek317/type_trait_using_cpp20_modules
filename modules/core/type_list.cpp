export module meta.core.type_list;

export namespace meta{
    
    template<typename... Ts>
    struct type_list {
        
        static constexpr auto size = sizeof...(Ts);
        
        template<auto N>
        using at = Ts...[N];
    };
}