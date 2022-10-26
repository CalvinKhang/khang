/**
 * @file: main.cpp
 * @author: KhangDC1
 * @version: 0.0.2
 * @date: 25/10/2022
*/

/*define somethings */


/* include standard library */
#include"template.cpp"


int main(int argc, char **argv)
{   
    /*Task1 : Make Template Function*/
    int k ;
    k = sum<int>(10,20);
    std::cout<<"Template Function sum<int>(10,20) = " << k << std::endl;

    /*Task2 : Make Template Class*/
    CALCULATOR<int> templateClass(6,9);
    std::cout<< "Template Class of calc_add with 6 and 9 = " << templateClass.calc_add() << std::endl;
    std::cout<< "Template Class of calc_sub with 6 and 9 = " << templateClass.calc_sub() << std::endl;

    /*Task3 : Make Template Variadic Functions*/
    int l ;
    l = function_sum<int>(1,2,9,6);
    std::cout<< "Template Variadic functions function_sum(1,2,9,6) = " << l << std::endl;
    return 0;
}