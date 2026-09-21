export module meta.transformations.add_pointer;

import meta.transformations.remove_ref;

export namespace meta{
    
    template<typename T>
    struct add_pointer{
        using type = remove_ref_t<T>*;
    };
    
    template<typename T>
    using add_pointer_t = typename add_pointer<T>::type;
}