//
//  main.cpp
//  constant evaluation for all non-type template arguments
//
//  Created by Jakub Łabeński on 21.10.2017.
//  Copyright © 2017 Jakub Łabeński. All rights reserved.
//

template <int const* V>
struct S {
    static const int i = 0;
};

template <void (V)(int)>
struct M {
    static const int i = 0;
};

int a[10];
int i = 7;

static void f(float, int) {};
static void f(int a) {
    f(a, 0);
}

int main(int argc, const char * argv[]) {
    S<a> s1;
    S<&i> s2;
    S<nullptr> s3;
    S<&s1.i> s4;
    
    M<f> m1;
    return s1.i + s2.i + s3.i + s4.i + m1.i;
}
