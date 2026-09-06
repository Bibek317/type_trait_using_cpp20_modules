export module meta.transformations.remove_ref;

export namespace meta {
    
    template<typename T>
    struct remove_ref{
        using type = T;
    };
    
    template<typename T>
    struct remove_ref<T&>{
        using type = T;
    };
    
    template<typename T>
    struct remove_ref<T&&>{
        using type = T;
    };
    
    template<typename T>
    using remove_ref_t = typename remove_ref<T>::type;
}