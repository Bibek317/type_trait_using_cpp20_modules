export module meta.transformations.add_const;

export namespace meta {
    
    template<typename T>
    struct add_const{
        using type = const T;
    };
    
    template<typename T>
    using add_const_t = typename add_const<T>::type;
}