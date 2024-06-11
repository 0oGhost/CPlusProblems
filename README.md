### 👋 Hi
---
# 🧩 Problem-1

### Write A Program To Read a Number And Check If It Is Palindrome? 
> [!NOTE]\
> **Palindrome Is a Number That Reads The Same From Right To Left.**
```cpp
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

int ReverseNumber(int Number)
{
	int Remainder = 0, NumberTwo = 0;
	
	while (Number > 0)
	{							
		Remainder = Number % 10;
		Number /= 10;
		NumberTwo = NumberTwo * 10 + Remainder;
	}

	return NumberTwo;
}

bool IsPalindrome(int Number)
{
	return Number == ReverseNumber(Number);
}

void PrintResult(int Number)
{
	int ReversedNumber = ReverseNumber(Number);
	if (IsPalindrome(Number))
		cout << " Yes, It Is a Palindrome Number.\n";
	else
		cout << " No, It Is NOT a Palindrome Number.\n";
}
int main()
{
	PrintResult(ReadPositiveNumber(" Enter Number? "));
	return 0;
}
```
