export module meta.transformations.add_cvref; 


export namespace meta{
    
    template<typename T>
    struct add_cvref{
        using type = const volatile T&&;
    };
    
    template<typename T>
    using add_cvref_t = typename add_cvref<T>::type;
}