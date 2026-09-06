import meta;

#include <iostream>

int main() {

    static_assert(meta::is_same_v<int, int>);
    static_assert(!meta::is_same_v<int, float>);

    static_assert(
        meta::is_same_v<
            meta::type_identity_t<int>,
            int
        >
    );

    std::cout << "All compile-time tests passed!\n";
    
    if(meta::is_int_v<int>){
        std::cout<<"It's int";
    }
}