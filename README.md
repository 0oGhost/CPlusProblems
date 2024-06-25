

### 👋 Hi
---
# 🧩 Problem - 1

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

## 🧩 Problem - 2

---

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
 
void PrintInvertedNumberPattern(int Number)
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
	PrintInvertedNumberPattern(Number);
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

void  PrintInvertedNumberPattern(int Number)
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
	 PrintInvertedNumberPattern(Number);
	return 0;
}
```

### Write A Program To Print All Words From AAA To ZZZ ?
> [!NOTE]\
> Output
> AAA
> AAB
> ...
> ...
> ZZZ

```cpp
#include <iostream>
using namespace std;


void PrintAllWordsFromAtoZ()
{
    string Word = "";
    for (int i = 65; i <= 90; i++)
    {
        for(int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                Word += char(i);
                Word += char(j);
                Word += char(k);
                cout << Word << endl;
                Word = "";
            }

        }
        cout << "----------------------------\n";
    }
}


int main()
{
    PrintAllWordsFromAtoZ();
    return 0;
}
```


