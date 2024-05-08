#include <iostream>

namespace swap
{
	void swapNums(int& num1, int& num2, bool sameSign)
	{
		if (sameSign)
		{
			int temp;
			
			temp = num1;
			num1 = num2;
			num2 = temp;
		}
		else
		{
			std::cout << "Swap not possible! The sings must be the same." << std::endl;
		}
	}
	
	void swapNums(double& num1, double& num2, bool sameSign)
	{
		if (sameSign)
		{
			double temp;
			
			temp = num1;
			num1 = num2;
			num2 = temp;
		}
		else
		{
			std::cout << "Swap not possible! The sings must be the same." << std::endl;
		}
	}

	void swapNums(float& num1, float& num2, bool sameSign)
	{
		if (sameSign)
		{
			float temp;
			
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
