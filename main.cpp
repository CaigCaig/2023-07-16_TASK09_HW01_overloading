#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	bool operator == (const Fraction& fr) const
	{
		return numerator_ == fr.numerator_ && denominator_ == fr.denominator_;
	}
	bool operator != (const Fraction& fr) const
	{
		return !(*this == fr);
	}
	bool operator > (const Fraction& fr) const
	{
		return((double)(this->numerator_ / this->denominator_) > (double)(fr.numerator_ / fr.denominator_)) ? true : false;
	}
	bool operator < (const Fraction& fr) const
	{
		return !((*this > fr) || (*this == fr));
	}
	bool operator >= (const Fraction& fr) const
	{
		return !(*this < fr);
	}
	bool operator <= (const Fraction& fr) const
	{
		return !(*this > fr);
	}
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	system("pause");
	return 0;
}
