#include <cassert>
#include <iostream>
#include <cstdlib>

int main() {
    int N = 0;
    std::cin >> N;
    cassert::assert(N > 0, "N must larger than 0");
    return 0;
}