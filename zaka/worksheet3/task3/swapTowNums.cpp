#include <iostream>

namespace swap
{
	template <typename T>
	void swapNums(T& num1, T& num2, bool sameSign)
	{
		if (sameSign)
		{
			T temp;
			
			temp = num1;
			num1 = num2;
			num2 = temp;
		}
		else
		{
			std::cout << "Swap not possible! The sings must be the same." << std::endl;
		}
	}
}

using namespace std;

int main()
{
	double firstNumber;
	double secondNumber;
	bool sameSign;
	
	cin >> firstNumber;
	cin >> secondNumber;
	
	if ((firstNumber < 0 && secondNumber < 0) || (firstNumber >= 0 && secondNumber >= 0))
		sameSign = true;
	else
		sameSign = false;

	swap::swapNums(firstNumber, secondNumber, sameSign);
	
	cout.put('\n');
	cout << firstNumber << endl;
	cout << secondNumber << endl;
	
	return 0;
}
