/**
 * @file mycomplex.cpp
 * @brief Реализация класса Complex для работы с комплексными числами.
 */

#include <iostream>
#include <cmath>
#include "mycomplex.h"
using namespace std;

/**
 * @brief Конструктор с параметрами.
 * @param aRe Действительная часть.
 * @param aIm Мнимая часть.
 */
Complex::Complex(double aRe, double aIm) {
    Re = aRe;
    Im = aIm;
}

/**
 * @brief Конструктор копирования.
 * @param aRval Объект класса Complex, который нужно скопировать.
 */
Complex::Complex(const Complex& aRval) {
    Re = aRval.Re;
    Im = aRval.Im;
}

/**
 * @brief Деструктор. Обнуляет значения полей.
 */
Complex::~Complex() {
    Re = 0.0;
    Im = 0.0;
}

/**
 * @brief Устанавливает значения действительной и мнимой частей.
 * @param aRe Действительная часть.
 * @param aIm Мнимая часть.
 */
void Complex::Set(double aRe, double aIm) {
    Re = aRe;
    Im = aIm;
}

/**
 * @brief Преобразование комплексного числа в его модуль.
 * @return Модуль комплексного числа.
 */
Complex::operator double() {
    return abs();
}

/**
 * @brief Вычисляет модуль комплексного числа.
 * @return Модуль.
 */
double Complex::abs() {
    return sqrt(Re * Re + Im * Im);
}

/**
 * @brief Перегрузка оператора сложения для двух комплексных чисел.
 * @param aRval Второе слагаемое.
 * @return Результат сложения.
 */
Complex Complex::operator+(const Complex& aRval) {
    Complex Result;
    Result.Re = Re + aRval.Re;
    Result.Im = Im + aRval.Im;
    return Result;
}

/**
 * @brief Перегрузка оператора вычитания для двух комплексных чисел.
 * @param aRval Вычитаемое.
 * @return Результат вычитания.
 */
Complex Complex::operator-(const Complex& aRval) {
    Complex Result;
    Result.Re = Re - aRval.Re;
    Result.Im = Im - aRval.Im;
    return Result;
}

/**
 * @brief Перегрузка оператора сложения для комплексного числа и вещественного числа.
 * @param aRval Вещественное число.
 * @return Результат сложения.
 */
Complex Complex::operator+(const double& aRval) {
    Complex result;
    result.Re = Re + aRval;
    result.Im = Im;
    return result;
}

/**
 * @brief Перегрузка оператора вычитания для комплексного числа и вещественного числа.
 * @param aRval Вещественное число.
 * @return Результат вычитания.
 */
Complex Complex::operator-(const double& aRval) {
    Complex Result(*this);
    Result.Re = Re - aRval;
    return Result;
}

/**
 * @brief Перегрузка оператора умножения для двух комплексных чисел.
 * @param aRval Второй множитель.
 * @return Результат умножения.
 */
Complex Complex::operator*(const Complex& aRval) {
    Complex Result;
    Result.Re = Re * aRval.Re - Im * aRval.Im;
    Result.Im = Re * aRval.Im + Im * aRval.Re;
    return Result;
}

/**
 * @brief Перегрузка оператора умножения для комплексного числа и вещественного числа.
 * @param aRval Вещественное число.
 * @return Результат умножения.
 */
Complex Complex::operator*(const double& aRval) {
    Complex Result;
    Result.Re = Re * aRval;
    Result.Im = Im * aRval;
    return Result;
}

/**
 * @brief Перегрузка оператора деления для комплексного числа и вещественного числа.
 * @param aRval Вещественное число.
 * @return Результат деления.
 */
Complex Complex::operator/(const double& aRval) {
    Complex Result;
    Result.Re = Re / aRval;
    Result.Im = Im / aRval;
    return Result;
}

/**
 * @brief Перегрузка оператора += для двух комплексных чисел.
 * @param aRval Слагаемое.
 * @return Ссылка на текущий объект.
 */
Complex& Complex::operator+=(const Complex& aRval) {
    Re += aRval.Re;
    Im += aRval.Im;
    return *this;
}

/**
 * @brief Перегрузка оператора -= для двух комплексных чисел.
 * @param aRval Вычитаемое.
 * @return Ссылка на текущий объект.
 */
Complex& Complex::operator-=(const Complex& aRval) {
    Re -= aRval.Re;
    Im -= aRval.Im;
    return *this;
}

/**
 * @brief Перегрузка оператора *= для двух комплексных чисел.
 * @param aRval Множитель.
 * @return Ссылка на текущий объект.
 */
Complex& Complex::operator*=(const Complex& aRval) {
    double tmpRe = Re;
    Re = Re * aRval.Re - Im * aRval.Im;
    Im = Im * aRval.Re + tmpRe * aRval.Im;
    return *this;
}

/**
 * @brief Перегрузка оператора += для комплексного числа и вещественного числа.
 * @param aRval Слагаемое.
 * @return Ссылка на текущий объект.
 */
Complex& Complex::operator+=(const double& aRval) {
    Re += aRval;
    return *this;
}

/**
 * @brief Перегрузка оператора -= для комплексного числа и вещественного числа.
 * @param aRval Вычитаемое.
 * @return Ссылка на текущий объект.
 */
Complex& Complex::operator-=(const double& aRval) {
    Re -= aRval;
    return *this;
}

/**
 * @brief Перегрузка оператора *= для комплексного числа и вещественного числа.
 * @param aRval Множитель.
 * @return Ссылка на текущий объект.
 */
Complex& Complex::operator*=(const double& aRval) {
    Re *= aRval;
    Im *= aRval;
    return *this;
}

/**
 * @brief Перегрузка оператора /= для комплексного числа и вещественного числа.
 * @param aRval Делитель.
 * @return Ссылка на текущий объект.
 */
Complex& Complex::operator/=(const double& aRval) {
    Re /= aRval;
    Im /= aRval;
    return *this;
}

/**
 * @brief Перегрузка оператора = для двух комплексных чисел.
 * @param aRval Присваиваемое значение.
 * @return Ссылка на текущий объект.
 */
Complex& Complex::operator=(const Complex& aRval) {
    Re = aRval.Re;
    Im = aRval.Im;
    return *this;
}

/**
 * @brief Перегрузка оператора = для комплексного числа и вещественного числа.
 * @param aRval Присваиваемое значение.
 * @return Ссылка на текущий объект.
 */
Complex& Complex::operator=(const double& aRval) {
    Re = aRval;
    Im = 0.0;
    return *this;
}

/**
 * @brief Перегрузка оператора ввода из потока.
 * @param stream Входной поток.
 * @param a Объект класса Complex для ввода значений.
 * @return Ссылка на поток.
 */
istream& operator>>(istream& stream, Complex& a) {
    char tmp[256];
    stream >> a.Re >> a.Im >> tmp;
    return stream;
}

/**
 * @brief Перегрузка оператора вывода в поток.
 * @param stream Выходной поток.
 * @param a Объект класса Complex для вывода.
 * @return Ссылка на поток.
 */
ostream& operator<<(ostream& stream, Complex& a) {
    stream << a.Re;
    if (!(a.Im < 0)) stream << '+';
    stream << a.Im << 'i';
    return stream;
}

/**
 * @brief Перегрузка оператора сложения для вещественного числа и комплексного числа.
 * @param aLval Вещественное число.
 * @param aRval Комплексное число.
 * @return Результат сложения.
 */
Complex operator+(const double& aLval, const Complex& aRval) {
    Complex Result;
    Result.Re = aLval + aRval.Re;
    Result.Im = aRval.Im;
    return Result;
}

/**
 * @brief Перегрузка оператора вычитания для вещественного числа и комплексного числа.
 * @param aLval Вещественное число.
 * @param aRval Комплексное число.
 * @return Результат вычитания.
 */
Complex operator-(const double& aLval, const Complex& aRval) {
    Complex Result;
    Result.Re = aLval - aRval.Re;
    Result.Im = -aRval.Im;
    return Result;
}

/**
 * @brief Перегрузка оператора умножения для вещественного числа и комплексного числа.
 * @param aLval Вещественное число.
 * @param aRval Комплексное число.
 * @return Результат умножения.
 */
Complex operator*(const double& aLval, const Complex& aRval) {
    Complex r;
    r.Re = aLval * aRval.Re;
    r.Im = aLval * aRval.Im;
    return r;
}
