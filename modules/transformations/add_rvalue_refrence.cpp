export module meta.transformations.add_rvalue_ref;

export namespace meta {
    
    template<typename T>
    struct add_rvalue_refrence{
        using type = T&&;
    };
    
    template<typename T>
    using add_rvalue_ref_t = add_rvalue_refrence<T>::type;
}