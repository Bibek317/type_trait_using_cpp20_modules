export module meta.transformations.remove_cvref;

import meta.transformations.remove_ref;
import meta.transformations.remove_cv;

export namespace meta{
    
    template<typename T>
    struct remove_cvref{
        using type = remove_cv_t<remove_ref_t<T>>;
    };
    
    template<typename T>
    using remove_cvref_t = typename remove_cvref<T>::type;
}