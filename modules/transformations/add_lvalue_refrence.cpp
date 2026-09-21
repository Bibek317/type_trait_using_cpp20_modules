export module meta.transformations.add_lvalue_ref;

export namespace meta {
    
    template<typename T>
    struct add_lvalue_refrence{
        using type = T&;
    };
    
    template<typename T>
    using add_lvalue_ref_t = add_lvalue_refrence<T>::type;
}