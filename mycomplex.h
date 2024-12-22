#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_
#include <iostream>
using namespace std;

/**
 * @class Complex
 * @brief Класс для работы с комплексными числами.
 */
class Complex
{
    double Re; /**< Действительная часть комплексного числа. */
    double Im; /**< Мнимая часть комплексного числа. */

public:
    /**
     * @brief Конструктор с параметрами по умолчанию.
     * @param aRe Действительная часть (по умолчанию 0).
     * @param aIm Мнимая часть (по умолчанию 0).
     */
    Complex(double aRe = 0, double aIm = 0);

    /**
     * @brief Конструктор копирования.
     * @param a Другой объект Complex для копирования.
     */
    Complex(const Complex& a);

    /**
     * @brief Деструктор.
     */
    ~Complex();

    /**
     * @brief Устанавливает значение комплексного числа.
     * @param aRe Новое значение действительной части.
     * @param aIm Новое значение мнимой части (по умолчанию 0).
     */
    void Set(double aRe, double aIm = 0);

    /**
     * @brief Преобразует объект Complex в его модуль (тип double).
     * @return Модуль комплексного числа.
     */
    operator double();

    /**
     * @brief Вычисляет модуль комплексного числа.
     * @return Модуль числа (sqrt(Re^2 + Im^2)).
     */
    double abs();

    /**
     * @brief Перегрузка оператора ввода для класса Complex.
     * @param stream Входной поток.
     * @param a Объект Complex для ввода.
     * @return Ссылка на входной поток.
     */
    friend istream& operator>>(istream& stream, Complex& a);

    /**
     * @brief Перегрузка оператора вывода для класса Complex.
     * @param stream Выходной поток.
     * @param a Объект Complex для вывода.
     * @return Ссылка на выходной поток.
     */
    friend ostream& operator<<(ostream& stream, Complex& a);

    /**
     * @brief Перегрузка оператора сложения для двух объектов Complex.
     * @param a Другой объект Complex.
     * @return Результат сложения.
     */
    Complex operator+(const Complex& a);

    /**
     * @brief Перегрузка оператора вычитания для двух объектов Complex.
     * @param a Другой объект Complex.
     * @return Результат вычитания.
     */
    Complex operator-(const Complex& a);

    /**
     * @brief Перегрузка оператора сложения для Complex и double.
     * @param a Число типа double.
     * @return Результат сложения.
     */
    Complex operator+(const double& a);

    /**
     * @brief Перегрузка оператора сложения для double и Complex.
     * @param aLval Число типа double.
     * @param aRval Объект Complex.
     * @return Результат сложения.
     */
    friend Complex operator+(const double& aLval, const Complex& aRval);

    /**
     * @brief Перегрузка оператора вычитания для Complex и double.
     * @param a Число типа double.
     * @return Результат вычитания.
     */
    Complex operator-(const double& a);

    /**
     * @brief Перегрузка оператора вычитания для double и Complex.
     * @param aLval Число типа double.
     * @param aRval Объект Complex.
     * @return Результат вычитания.
     */
    friend Complex operator-(const double& aLval, const Complex& aRval);

    /**
     * @brief Перегрузка оператора умножения для двух объектов Complex.
     * @param a Другой объект Complex.
     * @return Результат умножения.
     */
    Complex operator*(const Complex& a);

    /**
     * @brief Перегрузка оператора умножения для Complex и double.
     * @param a Число типа double.
     * @return Результат умножения.
     */
    Complex operator*(const double& a);

    /**
     * @brief Перегрузка оператора умножения для double и Complex.
     * @param aLval Число типа double.
     * @param aRval Объект Complex.
     * @return Результат умножения.
     */
    friend Complex operator*(const double& aLval, const Complex& aRval);

    /**
     * @brief Перегрузка оператора деления для Complex и double.
     * @param a Число типа double.
     * @return Результат деления.
     */
    Complex operator/(const double& a);

    /**
     * @brief Перегрузка оператора += для двух объектов Complex.
     * @param a Другой объект Complex.
     * @return Ссылка на текущий объект.
     */
    Complex& operator+=(const Complex& a);

    /**
     * @brief Перегрузка оператора -= для двух объектов Complex.
     * @param a Другой объект Complex.
     * @return Ссылка на текущий объект.
     */
    Complex& operator-=(const Complex& a);

    /**
     * @brief Перегрузка оператора *= для двух объектов Complex.
     * @param a Другой объект Complex.
     * @return Ссылка на текущий объект.
     */
    Complex& operator*=(const Complex& a);

    /**
     * @brief Перегрузка оператора += для Complex и double.
     * @param a Число типа double.
     * @return Ссылка на текущий объект.
     */
    Complex& operator+=(const double& a);

    /**
     * @brief Перегрузка оператора -= для Complex и double.
     * @param a Число типа double.
     * @return Ссылка на текущий объект.
     */
    Complex& operator-=(const double& a);

    /**
     * @brief Перегрузка оператора *= для Complex и double.
     * @param a Число типа double.
     * @return Ссылка на текущий объект.
     */
    Complex& operator*=(const double& a);

    /**
     * @brief Перегрузка оператора /= для Complex и double.
     * @param a Число типа double.
     * @return Ссылка на текущий объект.
     */
    Complex& operator/=(const double& a);

    /**
     * @brief Перегрузка оператора присваивания для двух объектов Complex.
     * @param a Другой объект Complex.
     * @return Ссылка на текущий объект.
     */
    Complex& operator=(const Complex& a);

    /**
     * @brief Перегрузка оператора присваивания для Complex и double.
     * @param a Число типа double.
     * @return Ссылка на текущий объект.
     */
    Complex& operator=(const double& a);
};

#endif
