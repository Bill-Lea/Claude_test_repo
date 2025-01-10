#include <iostream>
#include "Calculator.h"

int main() {
    Calculator calc;
    
    double num1 = 10.5;
    double num2 = 5.25;
    
    std::cout << "Calculator Demo\n";
    std::cout << num1 << " + " << num2 << " = " << calc.Add(num1, num2) << "\n";
    std::cout << num1 << " - " << num2 << " = " << calc.Subtract(num1, num2) << "\n";
    
    return 0;
}