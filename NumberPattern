#include <iostream>
using namespace std;

int ReadPositiveNumber(string Massage)
{
	int Number;
	do
	{
		cout << Massage;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void NumberPattern(int Number)
{
	for (short i = Number; i >= 1; i--)
	{
		for (short j = 1; j <= i; j++)
			cout << i;
			cout << "\n";
	}
}

int main()
{
	short Number = ReadPositiveNumber("Number? ");
	NumberPattern(Number);
	return 0;
}
