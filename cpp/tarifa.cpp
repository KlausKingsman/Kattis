#include <iostream>
typedef unsigned int uint; //

uint x, n, t;

int main() {
    std::cin >> x >> n;  
    t = x * (n + 1);

    for(uint i=0; i<n; ++i) {
        std::cin >> x;
        t -= x;
    }

    std::cout << t << std::endl;
    getchar(); //easy way to keep console window open after execution.
    return 0;
  
}