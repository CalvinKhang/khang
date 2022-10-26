#include"template.hpp"

/* Template Class */
template<class A>
CALCULATOR<A>::CALCULATOR(A a, A b){
    first = a;
    second = b;
};

template<class A>
A CALCULATOR<A>::calc_sub(){
    return first - second;
};

template<class A>
A CALCULATOR<A>::calc_add(){
    return first + second;
};

/* Template Function */
template<class T>
T sum (T a, T b)
{
    return a + b;
};

/* Template Variadic functions */
template<class ...Args>
unsigned short int function_sum(Args... args)
{
    return (args + ...);
};