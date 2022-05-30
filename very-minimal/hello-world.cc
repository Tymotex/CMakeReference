#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::cout << "Hello world!" << std::endl;
    
    // Range-based for loop.
    std::vector<int> v = {1, 2, 3, 4};
    for (const auto& elem : v) {
        std::cout << elem << std::endl;
    }

    // std::gcd is C++17.
    std::cout << std::gcd(10, 8) << std::endl;
    
    return 0;
}

