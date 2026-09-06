export module meta.core.bool_constant;

import meta.core.integral_constant;

export namespace meta {
    
    template<bool Value>
    using bool_constant = integral_constant<bool, Value>;
    
    using true_type = bool_constant<true>;
    using false_type = bool_constant<false>;
}