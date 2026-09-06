export module meta;

export import meta.core.integral_constant;
export import meta.core.bool_constant;
export import meta.core.type_identity;
export import meta.core.type_list;

export import meta.comparison.is_same;

export import meta.categories.is_int;
export import meta.categories.is_array;
export import meta.categories.is_char;
export import meta.categories.is_double;
export import meta.categories.is_float;
export import meta.categories.is_pointer;
export import meta.categories.is_short;
export import meta.categories.is_void;
export import meta.categories.is_const;

export import meta.transformations.remove_pointer;
export import meta.transformations.remove_all_pointer;
export import meta.transformations.remove_const;
export import meta.transformations.remove_ref;