export module meta.core.integral_constant;

export namespace meta{
    
    template<typename T, T Value>
    struct integral_constant{
        
        static constexpr T value = Value;
        
        constexpr operator T() const noexcept {
            return value;
        }
        
        constexpr T operator()() const noexcept {
            return value;
        }
    };
}