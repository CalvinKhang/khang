#ifndef __template__template__hpp__
#define __template__template__hpp__

#include <iostream>
template<class A>
class CALCULATOR{
    private:
        A first, second ;
    public:
        CALCULATOR(A a, A b);
        A calc_add();
        A calc_sub();
};

template<class T>
T sum (T a, T b);

template<class ...Args>
unsigned short int function_sum(Args... args);

#endif