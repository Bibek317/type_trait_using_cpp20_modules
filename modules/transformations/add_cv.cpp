export module meta.transformations.add_cv;

export namespace meta {
    
    template<typename T>
    struct add_cv{
        using type = const volatile T;
    };
    
    template<typename T>
    using add_cv_t = typename add_cv<T>::type;
}