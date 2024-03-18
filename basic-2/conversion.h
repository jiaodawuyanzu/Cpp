//
// Created by 29918 on 2024/3/18.
//

#ifndef CPP_CONVERSION_H
#define CPP_CONVERSION_H

class Fraction {
public:
    explicit Fraction(int num, int den = 1) : m_numerator(num), m_denominator(den) {}
    operator double() const {
        return (double)(1.0 * m_numerator / m_denominator);
    }
    Fraction operator+(const Fraction& f) {
        return Fraction(m_numerator + f.m_numerator, m_denominator + f.m_denominator);
    }
private:
    int m_numerator;    // 分子
    int m_denominator; // 分母
};

void TestConvertion();
#endif //CPP_CONVERSION_H
