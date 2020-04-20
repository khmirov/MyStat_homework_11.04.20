//Реализуйте класс Дробь.
//Необходимо хранить числитель и знаменатель в качестве переменных - членов.
//Реализуйте функции - члены для ввода данных в переменные - члены,
//для выполнения арифметических операций
//(сложение, вычитание, умножение, деление, и т.д.).

#pragma once
#include <iostream>

using namespace std;

class Fraction
{
 private:
     int numerator;
     int denominator;

 public:

     void setNumerator()
     {
         cout << "Input numerator: "; cin >> numerator;
         this->numerator = numerator;
     }

     void setDenominator()
     {
         cout << "Input denominator: "; cin >> denominator;
         this->denominator = denominator;
     }


     int getNumerator()
     {
         return numerator;
     }

     int getDenominator()
     {
         return denominator;
     }

     void ShowFraction()
     {
         cout << "Your Fraction = " << numerator << "/" << denominator << endl;

     }

     void Multiplication(int a, int b, int c, int d)
     {
         int totalnumerator = a * b;
         int totaldenominator = c * d;

         cout << "Result of multiplication fractions = " << totalnumerator << "/" << totaldenominator << endl;
     }

     void Division (int a, int b, int c, int d)
     {
         int totalnumerator = a * d;
         int totaldenominator = c * b;

         cout << "Result of division fractions = " << totalnumerator << "/" << totaldenominator << endl;
     }

     void Addition(int a, int b, int c, int d)
     {
         int totalnumerator = (a * d) + (b * c);
         int totaldenominator = c * d;

         cout << "Result of multiplication fractions = " << totalnumerator << "/" << totaldenominator << endl;
     }

     void Subtraction(int a, int b, int c, int d)
     {
         int totalnumerator = (a * d) - (b * c);
         int totaldenominator = c * d;

         cout << "Result of multiplication fractions = " << totalnumerator << "/" << totaldenominator << endl;
     }

};
