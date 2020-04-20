//Реализуйте класс Дробь.
//Необходимо хранить числитель и знаменатель в качестве переменных - членов.
//Реализуйте функции - члены для ввода данных в переменные - члены,
//для выполнения арифметических операций
//(сложение, вычитание, умножение, деление, и т.д.).

#include <iostream>
#include "Fraction.h"
#include "Computation.h"

using namespace std;

int main()
{
    Fraction onefraction;
    onefraction.setNumerator();
    onefraction.setDenominator();
    onefraction.ShowFraction();
    cout << endl;

    Fraction twofraction;
    twofraction.setNumerator();
    twofraction.setDenominator();
    twofraction.ShowFraction();
    cout << endl;

    Fraction totalfraction;
    totalfraction.Multiplication(onefraction.getNumerator(), twofraction.getNumerator(), onefraction.getDenominator(), twofraction.getDenominator());
    totalfraction.Division(onefraction.getNumerator(), twofraction.getNumerator(), onefraction.getDenominator(), twofraction.getDenominator());
    totalfraction.Addition(onefraction.getNumerator(), twofraction.getNumerator(), onefraction.getDenominator(), twofraction.getDenominator());
    totalfraction.Subtraction(onefraction.getNumerator(), twofraction.getNumerator(), onefraction.getDenominator(), twofraction.getDenominator());


    

   
}
