#include <iostream>
#include "class.h"

using namespace std;

int main()
{
	Fraction f1(2, 7);
	Fraction f2(3, 4);

	Fraction f3 = f1.Multiply(f2);
	Fraction f4 = f1.Add(f2);
	Fraction f5 = f1.Substract(f2);
	Fraction f6 = f1.Divide(f2);


	Counter counter(211,255);
	counter.increment();
	counter.increment();
	counter.increment();
	cout << "Current value: " << counter.getCurrent() << endl;

	return 0;

}
