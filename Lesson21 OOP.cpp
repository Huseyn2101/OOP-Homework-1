#include <iostream>
#include <windows.h>
#include "class.h"

using namespace std;

int main()
{
	/*Fraction f1(2, 7);
	Fraction f2(3, 4);

	Fraction f3 = f1.Multiply(f2);
	Fraction f4 = f1.Add(f2);
	Fraction f5 = f1.Substract(f2);
	Fraction f6 = f1.Divide(f2);*/


	Counter counter(211, 215);
	int loop = 0;
	while (loop < 4)
	{
		int current = counter.getCurrent();
		if (current == 215)
		{
			loop++;
		}
		system("cls||clear");
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
		cout << "	                                                 " << endl;
		cout << "||\t\t\t" << current << "\t\t\t||" << endl;
		cout << "	                                                 " << endl;
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
		counter.increment();
		Sleep(1000);
	}


	return 0;

}
