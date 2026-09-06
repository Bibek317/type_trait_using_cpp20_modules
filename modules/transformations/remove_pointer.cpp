export module meta.transformations.remove_pointer;

export namespace meta{
    
    template<typename T>
    struct remove_pointer{
        using type = T;
    };
    
    template<typename T>
    struct remove_pointer<T*>{
        using type = T;
    };
    
    template<typename T>
    using remove_pointer_t = typename remove_pointer<T>::type;
}