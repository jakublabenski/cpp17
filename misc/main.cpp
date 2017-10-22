//
//  main.cpp
//  misc
//
//  Created by Jakub Łabeński on 21.10.2017.
//  Copyright © 2017 Jakub Łabeński. All rights reserved.
//

// __has_include can be used to check if header file exists
#if __has_include(<iostream>)
#include <iostream>
#endif

// static_assert

// static_assert in C++11 and C++14
static_assert(1, "Message");
// static_assert in C++17
static_assert(1);

// hexadecimal floating literals
float f1 = 0x1234P1F;
auto f2 = 0x1234.5P1L;

// using attribute namespaces without repetition
[[using gnu: unused, noreturn]] void u();

// declaring non-type template parameters with auto
template <auto v> struct S {};
S<1> a;
S<'a'> b;

// standard and non-standard attributes
[[some_unknown_attribute]] void m1();
[[pp::some_unknown_attribute]] void m2();

int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    return 0;
}
