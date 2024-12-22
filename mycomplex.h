#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_
#include <iostream>
using namespace std;

/**
 * @class Complex
 * @brief ����� ��� ������ � ������������ �������.
 */
class Complex
{
    double Re; /**< �������������� ����� ������������ �����. */
    double Im; /**< ������ ����� ������������ �����. */

public:
    /**
     * @brief ����������� � ����������� �� ���������.
     * @param aRe �������������� ����� (�� ��������� 0).
     * @param aIm ������ ����� (�� ��������� 0).
     */
    Complex(double aRe = 0, double aIm = 0);

    /**
     * @brief ����������� �����������.
     * @param a ������ ������ Complex ��� �����������.
     */
    Complex(const Complex& a);

    /**
     * @brief ����������.
     */
    ~Complex();

    /**
     * @brief ������������� �������� ������������ �����.
     * @param aRe ����� �������� �������������� �����.
     * @param aIm ����� �������� ������ ����� (�� ��������� 0).
     */
    void Set(double aRe, double aIm = 0);

    /**
     * @brief ����������� ������ Complex � ��� ������ (��� double).
     * @return ������ ������������ �����.
     */
    operator double();

    /**
     * @brief ��������� ������ ������������ �����.
     * @return ������ ����� (sqrt(Re^2 + Im^2)).
     */
    double abs();

    /**
     * @brief ���������� ��������� ����� ��� ������ Complex.
     * @param stream ������� �����.
     * @param a ������ Complex ��� �����.
     * @return ������ �� ������� �����.
     */
    friend istream& operator>>(istream& stream, Complex& a);

    /**
     * @brief ���������� ��������� ������ ��� ������ Complex.
     * @param stream �������� �����.
     * @param a ������ Complex ��� ������.
     * @return ������ �� �������� �����.
     */
    friend ostream& operator<<(ostream& stream, Complex& a);

    /**
     * @brief ���������� ��������� �������� ��� ���� �������� Complex.
     * @param a ������ ������ Complex.
     * @return ��������� ��������.
     */
    Complex operator+(const Complex& a);

    /**
     * @brief ���������� ��������� ��������� ��� ���� �������� Complex.
     * @param a ������ ������ Complex.
     * @return ��������� ���������.
     */
    Complex operator-(const Complex& a);

    /**
     * @brief ���������� ��������� �������� ��� Complex � double.
     * @param a ����� ���� double.
     * @return ��������� ��������.
     */
    Complex operator+(const double& a);

    /**
     * @brief ���������� ��������� �������� ��� double � Complex.
     * @param aLval ����� ���� double.
     * @param aRval ������ Complex.
     * @return ��������� ��������.
     */
    friend Complex operator+(const double& aLval, const Complex& aRval);

    /**
     * @brief ���������� ��������� ��������� ��� Complex � double.
     * @param a ����� ���� double.
     * @return ��������� ���������.
     */
    Complex operator-(const double& a);

    /**
     * @brief ���������� ��������� ��������� ��� double � Complex.
     * @param aLval ����� ���� double.
     * @param aRval ������ Complex.
     * @return ��������� ���������.
     */
    friend Complex operator-(const double& aLval, const Complex& aRval);

    /**
     * @brief ���������� ��������� ��������� ��� ���� �������� Complex.
     * @param a ������ ������ Complex.
     * @return ��������� ���������.
     */
    Complex operator*(const Complex& a);

    /**
     * @brief ���������� ��������� ��������� ��� Complex � double.
     * @param a ����� ���� double.
     * @return ��������� ���������.
     */
    Complex operator*(const double& a);

    /**
     * @brief ���������� ��������� ��������� ��� double � Complex.
     * @param aLval ����� ���� double.
     * @param aRval ������ Complex.
     * @return ��������� ���������.
     */
    friend Complex operator*(const double& aLval, const Complex& aRval);

    /**
     * @brief ���������� ��������� ������� ��� Complex � double.
     * @param a ����� ���� double.
     * @return ��������� �������.
     */
    Complex operator/(const double& a);

    /**
     * @brief ���������� ��������� += ��� ���� �������� Complex.
     * @param a ������ ������ Complex.
     * @return ������ �� ������� ������.
     */
    Complex& operator+=(const Complex& a);

    /**
     * @brief ���������� ��������� -= ��� ���� �������� Complex.
     * @param a ������ ������ Complex.
     * @return ������ �� ������� ������.
     */
    Complex& operator-=(const Complex& a);

    /**
     * @brief ���������� ��������� *= ��� ���� �������� Complex.
     * @param a ������ ������ Complex.
     * @return ������ �� ������� ������.
     */
    Complex& operator*=(const Complex& a);

    /**
     * @brief ���������� ��������� += ��� Complex � double.
     * @param a ����� ���� double.
     * @return ������ �� ������� ������.
     */
    Complex& operator+=(const double& a);

    /**
     * @brief ���������� ��������� -= ��� Complex � double.
     * @param a ����� ���� double.
     * @return ������ �� ������� ������.
     */
    Complex& operator-=(const double& a);

    /**
     * @brief ���������� ��������� *= ��� Complex � double.
     * @param a ����� ���� double.
     * @return ������ �� ������� ������.
     */
    Complex& operator*=(const double& a);

    /**
     * @brief ���������� ��������� /= ��� Complex � double.
     * @param a ����� ���� double.
     * @return ������ �� ������� ������.
     */
    Complex& operator/=(const double& a);

    /**
     * @brief ���������� ��������� ������������ ��� ���� �������� Complex.
     * @param a ������ ������ Complex.
     * @return ������ �� ������� ������.
     */
    Complex& operator=(const Complex& a);

    /**
     * @brief ���������� ��������� ������������ ��� Complex � double.
     * @param a ����� ���� double.
     * @return ������ �� ������� ������.
     */
    Complex& operator=(const double& a);
};

#endif
