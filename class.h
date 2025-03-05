#pragma once
#include <iostream>

using namespace std;


class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction()
	{
		m_numerator = 0;
		m_denominator = 1;
	}
	Fraction(int num, int don)
	{
		m_numerator = num;
		m_denominator = don;
	}
	Fraction Multiply(const Fraction& f)
	{
		return Fraction(m_numerator * f.m_numerator, m_denominator * f.m_denominator);
	}
	Fraction Add(const Fraction& f)
	{
		return Fraction(m_numerator * f.m_denominator + f.m_numerator * m_denominator, m_denominator * f.m_denominator);
	}

	Fraction Substract(const Fraction& f)
	{
		return Fraction(m_numerator * f.m_denominator - f.m_numerator * m_denominator, m_denominator * f.m_denominator);
	}
	Fraction Divide(const Fraction& f)
	{
		return Fraction(m_numerator * f.m_denominator, m_denominator * f.m_numerator);
	}
	int gcd(int a, int b)
	{
		return b == 0 ? a : gcd(b, a % b);
	}
	void Simplify()
	{
		int common = gcd(m_numerator, m_denominator);
		m_numerator /= common;
		m_denominator /= common;
	}
	void show()
	{
		cout << "Result: " << m_numerator << "/" << m_denominator << endl;
	}

	~Fraction()
	{
		Simplify();
		show();
		cout << "Fraction object is destroyed" << endl;
	}
};

class Counter {
private:
	int _min;
	int _max;
	int _current;
public:
	Counter()
	{
		_min = 0;
		_max = 100;
		_current = 0;
	}
	Counter(int min, int max)
	{
		_min = min;
		_max = max;
		_current = min;
	}
	void increment()
	{
		_current < _max ? _current++ : _min;
	}
	void decrement()
	{
		_current > _min ? _current-- : _max;
	}
	int getCurrent()
	{
		return _current;
	}
	~Counter()
	{
		cout << "\vCounter object is destroyed" << endl;
	}
};

