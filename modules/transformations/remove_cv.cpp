export module meta.transformations.remove_cv;


export namespace meta {
    
    template<typename T>
    struct remove_cv{
        using type = T;
    };
    
    template<typename T>
    struct remove_cv<const T>{
        using type = T;
    };
    
    template<typename T>
    struct remove_cv<volatile T>{
        using type = T;
    };
    
    template<typename T>
    struct remove_cv<volatile const T>{
        using type = T;
    };
    
    template<typename T>
    using remove_cv_t =typename remove_cv<T>::type;
    
}