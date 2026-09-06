export module meta.transformations.remove_all_pointer;

export namespace meta {
    
    template<typename T>
    struct remove_all_pointer {
        using type = T;
    };
    
    template<typename T>
    struct remove_all_pointer<T*>{
        using type = typename remove_all_pointer<T>::type;
    };
    
    template<typename T>
    using remove_all_pointer_t = typename remove_all_pointer<T>::type;
}