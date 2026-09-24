module;

#include <concepts>
#include <type_traits>
#include <array>

export module meta.core.value_list;

export namespace meta{
    
    template<auto... Vs>
	struct value_list {
    	static constexpr std::size_t size = sizeof...(Vs);

    	template<std::size_t N>
    	static constexpr auto at = Vs...[N];
    
    	template<auto v>
    	using append = value_list<Vs...,v>;

   	 template<auto Fn>
   	 using transform = value_list<Fn(Vs)...>;
    
   	 template<class Fn>
   	 requires (std::invocable<Fn, decltype(Vs)> and ...)
   	 static constexpr void foreach(Fn f){
      	  (f(Vs),...);
   	 }
        
        static constexpr auto to_array()
    		-> std::array<std::common_type_t<decltype(Vs)...>, sizeof...(Vs)>
		{
   		 return {Vs...};
		}
        

	};

}