export module meta.transformations.remove_const;

export namespace meta {
    
    template<typename T>
    struct remove_const{
        using type = T;
    };
    
    template<typename T>
    struct remove_const<const T>{
        using type = T;
    };
    
    template<typename T>
    using remove_const_t = typename remove_const<T>::type;
}