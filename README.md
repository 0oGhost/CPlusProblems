
# المهارات

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white) ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white) ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)  
![CSS3](https://img.shields.io/badge/css3-%231572B6.svg?style=for-the-badge&logo=css3&logoColor=white) ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white) ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)  
![C#](https://img.shields.io/badge/c%23-%23239120.svg?style=for-the-badge&logo=csharp&logoColor=white) ![HTML5](https://img.shields.io/badge/html5-%23E34F26.svg?style=for-the-badge&logo=html5&logoColor=white) ![Adobe Photoshop](https://img.shields.io/badge/adobe%20photoshop-%2331A8FF.svg?style=for-the-badge&logo=adobe%20photoshop&logoColor=white)  
![TOR](https://img.shields.io/badge/tor-%237E4798.svg?style=for-the-badge&logo=tor-project&logoColor=white) ![Raspberry Pi](https://img.shields.io/badge/-RaspberryPi-C51A4A?style=for-the-badge&logo=Raspberry-Pi) ![Git](https://img.shields.io/badge/git-%23F05033.svg?style=for-the-badge&logo=git&logoColor=white)  
![GitHub Actions](https://img.shields.io/badge/github%20actions-%232671E5.svg?style=for-the-badge&logo=githubactions&logoColor=white)


### 👋 Hi
---
# 🧩 Problem-1

### Write A Program To Read a Number And Check If It Is Palindrome? 
> [!NOTE]\
> Palindrome Is a Number That Reads The Same From Right To Left.
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
# 🧩 Problem-2

### Write A Program To Read a Number And Print Inverted Pattern As Follows ?
> [!NOTE]\
> The solve Number one.
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
 
void NumberPattern(int Number)
{
	short Num = Number;
	for (short i = 1; i <= Number; i++)
	{
		for (short j = 1; j <= Num; j++)
		{
			cout << Num;
		}
		Num--;
		cout << endl;
	}
}

int main()
{
	short Number = ReadPositiveNumber("Number? ");
	NumberPattern(Number);
	return 0;
}
```
> [!NOTE]\
> The solve Number two.
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
```

