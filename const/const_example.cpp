#include<iostream>
#include<cstring>

int main() {
    int a0 = 2;
    const int a1 = 1;

    const int* a2 = {}; 
    a2 = &a0; 
    a2 = &a1;// a2指针是常量指针，

    int const* a3 = {}; 
    a3 = &a0; 
    a3 = &a1;

    const int* const a4 = {}; 
    // !!! a4 = &a0;
    // !!! a4 = &a1;
    // a4 is read-only variable

    int const &a5 = a0;
    //a0 = 3;
    // std::cout << "a5 = " << a5 << std::endl;

    const int& a6 = a0;
    a0 = 3;

    return 0;
}