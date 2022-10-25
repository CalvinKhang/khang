/** 
 * @file: main.cpp
 * @author: khangdc1
 * @version: 0.01
 * @date: 14/10/2022
*/

#include"./calc/calc.hpp"
#include <iostream>

int main(void){
    int a,b;
    cout << "Input A and B:";
    cin>> a;
    cin>> b;
    cout <<"sum(a+b)="<< calc_sum(a,b) << endl;
}